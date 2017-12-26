/*=====================================================================
**
** Source:  SetFilePointer.c (test 1)
**
** Purpose: Tests the PAL implementation of the SetFilePointer function.
**          Set the file pointer using a NULL handle and other invalid
**          options.
**
** 
**  Copyright (c) 2006 Microsoft Corporation.  All rights reserved.
** 
**  The use and distribution terms for this software are contained in the file
**  named license.txt, which can be found in the root of this distribution.
**  By using this software in any fashion, you are agreeing to be bound by the
**  terms of this license.
** 
**  You must not remove this notice, or any other, from this software.
** 
**
**===================================================================*/

#include <palsuite.h>


const char* szTextFile = "text.txt";


int __cdecl main(int argc, char *argv[])
{
    HANDLE hFile = NULL;
    DWORD dwByteCount = 0;
    DWORD dwOffset = 25;
    DWORD dwRc = 0;
    BOOL bRc = FALSE;
    char buffer[100];


    if (0 != PAL_Initialize(argc,argv))
    {
        return FAIL;
    }

    /* set the file pointer on a NULL file handle */
    dwRc = SetFilePointer(NULL, dwOffset, NULL, FILE_BEGIN);
    if (dwRc != INVALID_SET_FILE_POINTER)
    {
        Fail("SetFilePointer: ERROR -> Call to SetFilePointer succeeded "
            "with a NULL pointer\n");
    }


    /* create a test file without proper permission */
    hFile = CreateFile(szTextFile,
        0,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL);

    if(hFile == INVALID_HANDLE_VALUE)
    {
        Fail("SetFilePointer: ERROR -> Unable to create file \"%s\".\n",
            szTextFile);
    }

    /* ReadFile fails as expected */
    bRc = ReadFile(hFile, buffer, 1, &dwByteCount, NULL);
    if (bRc != FALSE)
    {
        Trace("SetFilePointer: ERROR -> ReadFile was successful when it was "
            "expected to fail\n");
        if (!CloseHandle(hFile))
        {
            Trace("SetFilePointer: ERROR -> Unable to close file \"%s\".\n",
                szTextFile);
        }
        if (!DeleteFileA(szTextFile))
        {
            Trace("SetFilePointer: ERROR -> Unable to delete file \"%s\".\n",
                szTextFile);
        }
        PAL_Terminate();
        return FAIL;
    }

    /* move the file pointer before the beginning of the file */
    dwRc = SetFilePointer(hFile, -1, NULL, FILE_BEGIN);
    if (dwRc != INVALID_SET_FILE_POINTER)
    {
        Trace("SetFilePointer: ERROR -> Was able to move the pointer before "
            "the beginning of the file.\n");
        bRc = CloseHandle(hFile);
        if (bRc != TRUE)
        {
            Trace("SetFilePointer: ERROR -> Unable to close file \"%s\".\n",
                szTextFile);
        }
        if (!DeleteFileA(szTextFile))
        {
            Trace("SetFilePointer: ERROR -> Unable to delete file \"%s\".\n",
                szTextFile);
        }
        PAL_Terminate();
        return FAIL;
    }

    bRc = CloseHandle(hFile);
    if (bRc != TRUE)
    {
        Trace("SetFilePointer: ERROR -> Unable to close file \"%s\".\n",
            szTextFile);
        if (!DeleteFileA(szTextFile))
        {
            Trace("SetFilePointer: ERROR -> Unable to delete file \"%s\".\n",
                szTextFile);
        }
        PAL_Terminate();
        return FAIL;
    }

    if (!DeleteFileA(szTextFile))
    {
        Fail("SetFilePointer: ERROR -> Unable to delete file \"%s\".\n",
            szTextFile);
    }
    PAL_Terminate();
    return PASS;
}

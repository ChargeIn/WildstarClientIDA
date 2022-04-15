#include "../winhttp.h"

//----- (0000000140829340) ----------------------------------------------------
__int64 __fastcall sub_140829340(unsigned int a1, __int64 a2, _DWORD* a3)
{
	unsigned int v7; // ebx
	unsigned int v8; // [rsp+20h] [rbp-39h] BYREF
	HANDLE hObject; // [rsp+28h] [rbp-31h]
	int v10; // [rsp+30h] [rbp-29h]
	__int128 v11; // [rsp+38h] [rbp-21h]
	__int128 v12; // [rsp+48h] [rbp-11h]
	__int128 v13; // [rsp+58h] [rbp-1h]
	__int64 v14; // [rsp+68h] [rbp+Fh]
	__int128 v15[3]; // [rsp+70h] [rbp+17h] BYREF
	__int64 v16; // [rsp+A0h] [rbp+47h]

	hObject = CreateEventW(0i64, 0, 0, 0i64);
	if (!hObject)
		return 2i64;
	LODWORD(v11) = 1;
	*((_QWORD*)&v11 + 1) = sub_1408272D0;
	DWORD2(v12) = 1;
	*(_QWORD*)&v12 = &v8;
	*(_QWORD*)&v13 = a1 | 0xFFFFFFFF00000000ui64;
	v15[0] = v11;
	*((_QWORD*)&v13 + 1) = a2;
	LODWORD(v14) = 0;
	v15[1] = v12;
	v16 = v14;
	v15[2] = v13;
	v7 = sub_140841990((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v15);
	if (v7 == 1)
	{
		WaitForSingleObject(hObject, 0xFFFFFFFF);
		if (hObject)
			CloseHandle(hObject);
		v7 = v8;
	}
	else if (hObject)
	{
		CloseHandle(hObject);
	}
	if (a3)
		*a3 = v10;
	return v7;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;


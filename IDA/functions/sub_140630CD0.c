#include "../winhttp.h"

//----- (0000000140630CD0) ----------------------------------------------------
__int64 __fastcall sub_140630CD0(__int64 a1, __int64 a2)
{
	int* v2; // rbp
	int v3; // esi
	__int64 v4; // r15
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // rbx
	unsigned __int64 v9; // rdi
	__int64 v10; // rdi
	int* v11; // rax
	__int64 v12; // rbp
	unsigned __int64 v13; // rdi
	__int64 v14; // rcx
	int v15; // edi
	LARGE_INTEGER* QuadPart; // rbx
	__int64 v18; // [rsp+20h] [rbp-48h]
	int v19; // [rsp+30h] [rbp-38h] BYREF
	__int64 v20; // [rsp+38h] [rbp-30h]
	__int64 v21; // [rsp+70h] [rbp+8h] BYREF

	v21 = a1;
	v2 = *(int**)(a2 + 8);
	v3 = 0;
	v4 = qword_140C65C18;
	if (v2)
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
	}
	else
	{
		v8 = 0i64;
	}
	v19 = *(_DWORD*)a2;
	if (v8)
	{
		v10 = *((_QWORD*)v8 - 1);
		v11 = sub_14018B280(2 * v10 + 18, 0);
		if (v11)
		{
			*(_QWORD*)v11 = off_140B55060;
			*((_QWORD*)v11 + 1) = v10;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = (__int64)(v11 + 4);
		v13 = 2 * v10;
		sub_1407DB590(v11 + 4, v8, v13);
		*(_WORD*)(v13 + v12) = 0;
		v20 = v12;
	}
	else
	{
		v12 = 0i64;
		v20 = 0i64;
	}
	sub_140631E70(v4 + 40, &v21, &v19);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	if (v8)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	if (v21 != *(_QWORD*)(v4 + 48))
	{
		v14 = *(_QWORD*)(v21 + 48);
		v15 = *(_DWORD*)(a2 + 4);
		QuadPart = *(LARGE_INTEGER**)(v14 + 48);
		LOBYTE(v3) = v15 == 5;
		for (*(_DWORD*)(v14 + 44) = v3; QuadPart; QuadPart = (LARGE_INTEGER*)QuadPart[15].QuadPart)
		{
			LODWORD(v18) = v15;
			sub_1406A4360((__int64)QuadPart, QuadPart + 1, "Li", QuadPart, v18);
		}
	}
	return 0i64;
}
// 140630E35: variable 'v18' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65C18: using guessed type __int64 qword_140C65C18;


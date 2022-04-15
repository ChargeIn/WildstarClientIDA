#include "../winhttp.h"

//----- (0000000140630B70) ----------------------------------------------------
__int64 __fastcall sub_140630B70(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	_QWORD* v7; // rbx
	__int64 v8; // rbp
	LARGE_INTEGER* QuadPart; // rbx
	__int64 v10; // rbx
	__int64 v11; // rbx
	int* v12; // rax
	__int64 v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // [rsp+20h] [rbp-38h]
	int v16; // [rsp+30h] [rbp-28h] BYREF
	__int64 v17; // [rsp+38h] [rbp-20h]

	v2 = qword_140C65C18;
	v4 = (*(__int64(__fastcall**)(__int64))(qword_140C65C18 + 24))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v4 % *(_QWORD*)(v2 + 8)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 32))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v7 = v5 + 3;
		if (v7)
		{
			v8 = *v7;
			QuadPart = *(LARGE_INTEGER**)(*v7 + 48i64);
			for (*(_DWORD*)(v8 + 44) = 0; QuadPart; QuadPart = (LARGE_INTEGER*)QuadPart[15].QuadPart)
			{
				LODWORD(v15) = 6;
				sub_1406A4360((__int64)QuadPart, QuadPart + 1, "Li", QuadPart, v15);
			}
			sub_1400B6120(v2, a2);
			v10 = *(_QWORD*)(v8 + 16);
			v16 = *(_DWORD*)(v8 + 40);
			if (v10)
			{
				v11 = *(_QWORD*)(v10 - 8);
				v12 = sub_14018B280(2 * v11 + 18, 0);
				if (v12)
				{
					*((_QWORD*)v12 + 1) = v11;
					*(_QWORD*)v12 = off_140B55060;
				}
				else
				{
					v12 = 0i64;
				}
				v13 = (__int64)(v12 + 4);
				v14 = 2 * v11;
				sub_1407DB590(v12 + 4, *(int**)(v8 + 16), v14);
				*(_WORD*)(v14 + v13) = 0;
				v17 = v13;
			}
			else
			{
				v13 = 0i64;
				v17 = 0i64;
			}
			sub_140631C10(v2 + 40, (__int64)&v16);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
		}
	}
	return 0i64;
}
// 140630C19: variable 'v15' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65C18: using guessed type __int64 qword_140C65C18;


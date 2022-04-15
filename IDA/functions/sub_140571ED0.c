#include "../winhttp.h"

//----- (0000000140571ED0) ----------------------------------------------------
__int64 __fastcall sub_140571ED0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 result; // rax
	unsigned int i; // esi
	unsigned int v6; // r8d
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	int* v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // [rsp+40h] [rbp+8h]

	v2 = qword_140C65970;
	result = sub_140722000(a1, *(_DWORD*)a2);
	if (result)
	{
		for (i = 0; i < *(_DWORD*)(a2 + 4); ++i)
		{
			v6 = *(_DWORD*)a2;
			v7 = *(_QWORD*)(v2 + 136);
			LODWORD(v13) = *(_DWORD*)a2;
			v8 = *(_QWORD*)(v7 + 8);
			HIDWORD(v13) = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4i64 * i);
			v9 = v7;
			while (v8)
			{
				v9 = v8;
				if (v6 >= *(_DWORD*)(v8 + 32))
					v8 = *(_QWORD*)(v8 + 24);
				else
					v8 = *(_QWORD*)(v8 + 16);
			}
			if (v9 == v7 || v6 < *(_DWORD*)(v9 + 32))
			{
				v10 = sub_14018B280(40i64, 0);
				if (v10 != (int*)-32i64)
					*((_QWORD*)v10 + 4) = v13;
				*(_QWORD*)(v9 + 16) = v10;
				v12 = *(_QWORD*)(v2 + 136);
				if (v9 == v12)
				{
					*(_QWORD*)(v12 + 8) = v10;
					*(_QWORD*)(*(_QWORD*)(v2 + 136) + 24i64) = v10;
				}
				else if (v9 == *(_QWORD*)(v12 + 16))
				{
					*(_QWORD*)(v12 + 16) = v10;
				}
			}
			else
			{
				v10 = sub_14018B280(40i64, 0);
				if (v10 != (int*)-32i64)
					*((_QWORD*)v10 + 4) = v13;
				*(_QWORD*)(v9 + 24) = v10;
				v11 = *(_QWORD*)(v2 + 136);
				if (v9 == *(_QWORD*)(v11 + 24))
					*(_QWORD*)(v11 + 24) = v10;
			}
			*((_QWORD*)v10 + 1) = v9;
			*((_QWORD*)v10 + 2) = 0i64;
			*((_QWORD*)v10 + 3) = 0i64;
			result = (__int64)sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(v2 + 136) + 8i64));
			++* (_QWORD*)(v2 + 144);
		}
	}
	return result;
}
// 140571F60: conditional instruction was optimized away because rax.8==0
// 140C65970: using guessed type __int64 qword_140C65970;


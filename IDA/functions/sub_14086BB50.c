#include "../winhttp.h"

//----- (000000014086BB50) ----------------------------------------------------
__int64* __fastcall sub_14086BB50(__int64 a1, __int64 a2, int a3)
{
	__int64* result; // rax
	char v5; // cl
	__int64* v6; // rdi
	__int64* v9; // rcx
	__int64 v10; // rsi
	int v11; // ecx
	int v12; // edi
	__int64* v13; // [rsp+20h] [rbp-28h]
	__int64* v14; // [rsp+28h] [rbp-20h]

	result = 0i64;
	v5 = 0;
	v6 = *(__int64**)(a1 + 360);
	if (v6)
	{
		do
		{
			if ((!a2 || a2 == v6[5]) && (!a3 || *((_DWORD*)v6 + 8) == a3))
			{
				v9 = (__int64*)*v6;
				v14 = result;
				v13 = (__int64*)*v6;
				if (v6 == *(__int64**)(a1 + 360))
					*(_QWORD*)(a1 + 360) = v9;
				else
					*result = (__int64)v9;
				if (v6 == *(__int64**)(a1 + 368))
					*(_QWORD*)(a1 + 368) = result;
				*v6 = *(_QWORD*)(a1 + 376);
				--* (_DWORD*)(a1 + 392);
				*(_QWORD*)(a1 + 376) = v6;
				sub_14083C260(qword_140C61B80, *((_DWORD*)v6 + 8));
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 312i64))(a1, 3i64);
				v10 = v6[5];
				v11 = *(_DWORD*)(v10 + 136) ^ (*(_DWORD*)(v10 + 136) ^ (*(_DWORD*)(v10 + 136) - 1)) & 0x3FFFFFFF;
				*(_DWORD*)(v10 + 136) = v11;
				if ((v11 & 0x3FFFFFFF) == 0)
				{
					v12 = dword_140C10F20;
					sub_14084BD30(v10);
					sub_140881720(v12, v10);
				}
				result = v14;
				v6 = v13;
				v5 = 1;
			}
			else
			{
				result = v6;
				v6 = (__int64*)*v6;
			}
		} while (v6);
		if (v5)
			return (__int64*)sub_140830190(qword_140C61BA0, *(_DWORD*)(a1 + 24), a2);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;


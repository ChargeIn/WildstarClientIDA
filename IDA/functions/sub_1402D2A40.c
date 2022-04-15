#include "../winhttp.h"

//----- (00000001402D2A40) ----------------------------------------------------
void __fastcall sub_1402D2A40(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rdi
	__int64 v7; // rdx
	_QWORD* v8; // r8
	__int64 v9; // rax

	if (*((_DWORD*)a1 + 20) != 5)
	{
		v2 = a1[45];
		if (v2)
		{
			v3 = *a1;
			v4 = (*(__int64 (**)(void))(*(_QWORD*)v2 + 24i64))();
			(*(void(__fastcall**)(__int64*, __int64))(v3 + 16))(a1, v4);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[45] + 32i64))(a1[45]);
		}
		else
		{
			v5 = qword_140C657F0;
			a1[44] = (__int64)a1;
			v6 = a1 + 38;
			v6[3] = v5 + 1376;
			*(_QWORD*)((char*)v6 + 12) = 0i64;
			v7 = *(_QWORD*)(v5 + 1200);
			v8 = (_QWORD*)(v7 + 24);
			if (!v6[4])
			{
				v6[4] = v8;
				v6[5] = *v8;
				*v8 = v6;
				v9 = v6[5];
				if (v9)
					*(_QWORD*)(v9 + 32) = v6 + 5;
			}
			++* (_QWORD*)(v7 + 88);
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;


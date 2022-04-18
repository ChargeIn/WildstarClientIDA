#include "../winhttp.h"

//----- (000000014057C830) ----------------------------------------------------
__int64 __fastcall sub_14057C830(__int64 a1, __int64 a2)
{
	int** v2; // rsi
	__int64 v3; // r15
	__int64 v4; // r12
	int* v5; // r14
	int* v6; // rbp
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	int v11; // eax

	v2 = (int**)(a1 + 24);
	v3 = a2 - a1;
	v4 = 10i64;
	do
	{
		v5 = *v2;
		v6 = (int*)&unk_1409F2BA4;
		if (*(int**)((char*)v2 + v3 - 8))
			v6 = *(int**)((char*)v2 + v3 - 8);
		if (v6)
		{
			v7 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v7;
				while (*((_WORD*)v6 + v7));
			}
			v8 = sub_14018B280(2 * v7 + 18, 0);
			if (v8)
			{
				*(_QWORD*)v8 = off_140B55060;
				*((_QWORD*)v8 + 1) = v7;
			}
			else
			{
				v8 = 0i64;
			}
			v9 = v8 + 4;
			v10 = 2 * v7;
			sub_1407DB590(v8 + 4, v6, v10);
			*(_WORD*)((char*)v9 + v10) = 0;
			*v2 = v9;
		}
		else
		{
			*v2 = 0i64;
		}
		if (v5)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
		v11 = *(_DWORD*)((char*)v2 + v3);
		v2 += 5;
		*((_DWORD*)v2 - 8) = v11;
		*(v2 - 3) = *(int**)((char*)v2 + v3 - 32);
		*(v2 - 2) = *(int**)((char*)v2 + v3 - 24);
		*(v2 - 1) = *(int**)((char*)v2 + v3 - 16);
		--v4;
	} while (v4);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildRankChange", byte_1409EA894, a1);
	return 0i64;
}
// 1409EA894: using guessed type _BYTE byte_1409EA894[48];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;


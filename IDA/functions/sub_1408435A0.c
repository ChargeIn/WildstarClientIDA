#include "../winhttp.h"

//----- (00000001408435A0) ----------------------------------------------------
__int64 __fastcall sub_1408435A0(__int64 a1, __int64 a2)
{
	int v2; // eax
	unsigned int v3; // r14d
	__int64 v4; // r12
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned int v9; // ebp
	unsigned int v10; // esi
	struct _RTL_CRITICAL_SECTION* v11; // r15
	__int64 v12; // rbx
	int v13; // eax
	unsigned int v14; // r9d
	unsigned int v15; // r8d

	v2 = *(_DWORD*)(a2 + 32);
	v3 = 1;
	v4 = 0i64;
	if (v2 == 1)
	{
		v7 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), *(_DWORD*)(a2 + 40));
		v8 = v7;
		if (v7)
		{
			sub_1408434C0(a1, v7, 0);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		}
		else
		{
			v3 = 15;
		}
	}
	else
	{
		v9 = 0;
		if (v2)
		{
			do
			{
				v10 = *(_DWORD*)(*(_QWORD*)(a2 + 40) + 4i64 * v9);
				v11 = (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776);
				v3 = 1;
				EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776));
				v12 = *((_QWORD*)&v11[1].DebugInfo + v10 % 0xC1);
				if (v12)
				{
					while (*(_DWORD*)(v12 + 24) != v10)
					{
						v12 = *(_QWORD*)(v12 + 16);
						if (!v12)
							goto LABEL_9;
					}
					++* (_DWORD*)(v12 + 8);
					LeaveCriticalSection(v11);
					sub_1408434C0(a1, v12, 0);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
				}
				else
				{
				LABEL_9:
					LeaveCriticalSection(v11);
					v3 = 15;
				}
				if (v3 != 1)
					break;
				++v9;
			} while (v9 < *(_DWORD*)(a2 + 32));
		}
		sub_140881720(dword_140C10F20, *(_QWORD*)(a2 + 40));
		*(_QWORD*)(a2 + 40) = 0i64;
	}
	v13 = *(_DWORD*)a2;
	v14 = -1;
	v15 = 0;
	if (*(int*)a2 >= 0)
	{
		if (v13 <= 1)
		{
			v14 = *(_DWORD*)(a2 + 36);
			v15 = *(_DWORD*)(a2 + 32);
			goto LABEL_22;
		}
		if (v13 == 4)
			goto LABEL_22;
		if ((unsigned int)(v13 - 6) <= 1)
		{
			v15 = *(_DWORD*)(a2 + 32);
			goto LABEL_22;
		}
	}
	if (*(_DWORD*)(a2 + 32) == 1)
		v15 = *(_DWORD*)(a2 + 40);
LABEL_22:
	if (*(_DWORD*)(a2 + 24) == 1)
		v4 = *(_QWORD*)(a2 + 40);
	sub_14083CE60(
		a1 + 2304,
		*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a2 + 8),
		v15,
		v4,
		v3,
		v14,
		*(_QWORD*)(a2 + 16));
	return v3;
}
// 1408436F0: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;


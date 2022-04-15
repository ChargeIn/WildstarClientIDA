//----- (000000014086A7D0) ----------------------------------------------------
__int64 __fastcall sub_14086A7D0(__int64 a1, int a2, __int64 a3)
{
	__int64 v5; // rsi
	__int64 v6; // r14
	_QWORD* v7; // rax
	__int64 i; // r8
	__int64* v9; // rbx

	if (a3)
	{
		sub_14086A8E0(a1, a2, a3);
		return 1i64;
	}
	else
	{
		v5 = *(unsigned int*)(a1 + 392);
		if ((_DWORD)v5)
		{
			v6 = sub_1408819F0(dword_140C10F20, (unsigned int)(8 * v5));
			if (v6)
			{
				v7 = *(_QWORD**)(a1 + 360);
				for (i = 0i64; v7; i = (unsigned int)(i + 1))
				{
					*(_QWORD*)(v6 + 8 * i) = v7[5];
					v7 = (_QWORD*)*v7;
				}
				v9 = (__int64*)v6;
				do
				{
					sub_14086A8E0(a1, a2, *v9++);
					--v5;
				} while (v5);
				sub_140881720(dword_140C10F20, v6);
				return 1i64;
			}
			else
			{
				return 2i64;
			}
		}
		else
		{
			sub_140830190(qword_140C61BA0, *(_DWORD*)(a1 + 24), 0i64);
			return 1i64;
		}
	}
}
// 14086A846: conditional instruction was optimized away because esi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;


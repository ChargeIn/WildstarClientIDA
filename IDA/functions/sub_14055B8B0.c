//----- (000000014055B8B0) ----------------------------------------------------
void __fastcall sub_14055B8B0(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rbx
	__int16* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rax

	if (a2)
	{
		v4 = qword_140C65898;
		if (((*(_DWORD*)(a2 + 128) - 20) & 0xFFFFFFFB) != 0)
		{
			v5 = sub_14034BDD0(a1, 363961);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
		}
		else
		{
			v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 264));
			if (v6)
			{
				sub_14055B0E0(v4, *(_DWORD*)(v6 + 8), a3, a4);
			}
			else
			{
				v8 = sub_14034BDD0(v7, 363704);
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v8, 0, 0i64);
			}
		}
	}
}
// 14055B91D: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;


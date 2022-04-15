//----- (000000014060B0C0) ----------------------------------------------------
void __fastcall sub_14060B0C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	int v6; // edx

	if (a2)
	{
		if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), *(_DWORD*)(a1 + 8)))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
		if (v4)
		{
			v5 = sub_14047DCA0(v4);
			if (v5)
			{
				v6 = *(_DWORD*)(v5 + 8);
				if (v6 != *(_DWORD*)(a1 + 8))
				{
					if ((unsigned int)sub_140649870(*(_QWORD**)(a2 + 16), v6))
					{
						sub_1400FB540(a2);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;


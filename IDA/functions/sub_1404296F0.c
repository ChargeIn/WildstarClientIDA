//----- (00000001404296F0) ----------------------------------------------------
__int64 __fastcall sub_1404296F0(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
	__int64 result; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int16* v11; // rax
	int v12; // [rsp+20h] [rbp-28h]
	int v13; // [rsp+28h] [rbp-20h]

	result = sub_1403D90D0(qword_140C65898, a2);
	if (result)
	{
		result = sub_1403ACD90(qword_140C65B70, a4, result);
		if (result)
		{
			v10 = *(_QWORD*)(result + 8);
			if (v10)
				v11 = sub_14034BDD0(v9, *(_DWORD*)(v10 + 16));
			else
				v11 = (__int16*)&unk_1409EB6FC;
			v13 = 0;
			v12 = a3;
			return sub_1400EA3E0(a1, "AttackMissed", "UUiS", a2, v12, v13, v11);
		}
	}
	return result;
}
// 14042974B: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;


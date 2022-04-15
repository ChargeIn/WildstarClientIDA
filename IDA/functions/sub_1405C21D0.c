//----- (00000001405C21D0) ----------------------------------------------------
__int64 __fastcall sub_1405C21D0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	int* v4; // rdi
	int v5; // eax
	int* v6; // rax
	__int64 v7; // rcx
	__int64 v9; // [rsp+30h] [rbp-28h] BYREF
	int* v10; // [rsp+38h] [rbp-20h]
	int* v11; // [rsp+40h] [rbp-18h]
	int* v12; // [rsp+48h] [rbp-10h]

	*(_DWORD*)(a1 + 64) = 1;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchVoteSurrenderBegin", &unk_1409D12B9);
	v2 = sub_14018B280(16i64, 0);
	v4 = v2;
	v10 = v2;
	v11 = v2;
	v12 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v5 = *(_DWORD*)(a1 + 4);
	if (v5 && (unsigned int)(v5 - 3) > 4)
	{
		v6 = (int*)sub_14034BDD0(v3, 496193);
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
	}
	else
	{
		v6 = (int*)sub_14034BDD0(v3, 441979);
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
	}
	if ((2 * v7) >> 1)
	{
		sub_14001C310(&v9, v6, (int*)((char*)v6 + 2 * v7));
		v4 = v10;
	}
	else
	{
		sub_1407DB590(v4, v6, 0i64);
	}
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v4, 0, 0i64);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}
// 1405C2248: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;


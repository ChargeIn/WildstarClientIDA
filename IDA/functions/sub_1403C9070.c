//----- (00000001403C9070) ----------------------------------------------------
__int64 __fastcall sub_1403C9070(__int64 a1, _DWORD* a2)
{
	unsigned int v4; // esi
	bool v5; // zf
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	int v12; // [rsp+20h] [rbp-28h]
	unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v14; // [rsp+34h] [rbp-14h]
	int v15; // [rsp+38h] [rbp-10h]

	v4 = *a2 - a2[3] - a2[4];
	v12 = a2[3];
	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ElderPointsGained", byte_1409EB744, v4, v12);
	v5 = *(_QWORD*)(a1 + 120) == 0i64;
	*(_DWORD*)(a1 + 5772) = a2[1];
	*(_DWORD*)(a1 + 5776) = a2[2];
	if (!v5 && (*a2 || a2[3]))
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29504);
		v13 = 4;
		v14 = v4;
		v15 = 0;
		sub_1404283D0(v6, &v13);
		v7 = a2[4];
		if (v7)
		{
			v13 = 7;
			v8 = *(_QWORD*)(qword_140C65898 + 29504);
			v14 = v7;
			v15 = 0;
			sub_1404283D0(v8, &v13);
		}
		v9 = a2[3];
		v10 = *(_QWORD*)(qword_140C65898 + 29504);
		v13 = 5;
		v14 = v9;
		v15 = 0;
		sub_1404283D0(v10, &v13);
	}
	return 0i64;
}
// 1409EB744: using guessed type _BYTE byte_1409EB744[48];
// 140C65898: using guessed type __int64 qword_140C65898;


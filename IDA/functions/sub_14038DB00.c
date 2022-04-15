//----- (000000014038DB00) ----------------------------------------------------
void __fastcall sub_14038DB00(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r11
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx

	*(_QWORD*)a1 = off_140B65E90;
	v2 = *(_QWORD*)(a1 + 848);
	if (v2)
		sub_1403762E0(v2);
	while (*(_QWORD*)(a1 + 856))
	{
		if (*(_QWORD*)(a1 + 856))
		{
			sub_14038FF70(*(_QWORD**)(a1 + 856));
			sub_14018B900(v3, 0);
		}
	}
	v4 = *(_QWORD**)(a1 + 872);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 880);
	v5 = *(_QWORD*)(a1 + 880);
	if (v5)
		*(_QWORD*)(v5 + 872) = *(_QWORD*)(a1 + 872);
	*(_QWORD*)(a1 + 872) = 0i64;
	*(_QWORD*)(a1 + 880) = 0i64;
	v6 = *(_QWORD**)(a1 + 904);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 912);
	v7 = *(_QWORD*)(a1 + 912);
	if (v7)
		*(_QWORD*)(v7 + 904) = *(_QWORD*)(a1 + 904);
	*(_QWORD*)(a1 + 904) = 0i64;
	*(_QWORD*)(a1 + 912) = 0i64;
	v8 = *(_QWORD**)(a1 + 888);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 896);
	v9 = *(_QWORD*)(a1 + 896);
	if (v9)
		*(_QWORD*)(v9 + 888) = *(_QWORD*)(a1 + 888);
	*(_QWORD*)(a1 + 888) = 0i64;
	*(_QWORD*)(a1 + 896) = 0i64;
	v10 = *(_QWORD**)(a1 + 872);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 880);
	v11 = *(_QWORD*)(a1 + 880);
	if (v11)
		*(_QWORD*)(v11 + 872) = *(_QWORD*)(a1 + 872);
	*(_QWORD*)(a1 + 872) = 0i64;
	*(_QWORD*)(a1 + 880) = 0i64;
	if (*(_QWORD*)(a1 + 856))
		sub_1401A4A00((const void***)(a1 + 856));
}
// 14038DB4B: variable 'v3' is possibly undefined
// 140B65E90: using guessed type __int64 (__fastcall *off_140B65E90[7])();


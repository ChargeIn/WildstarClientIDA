//----- (00000001404A4CF0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A4CF0(__int64 a1, __int64 a2, int a3, int a4)
{
	float v8; // xmm7_4
	float v9; // xmm0_4
	__int64 v10; // rcx

	if (!a2)
		return 0i64;
	v8 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2) * 100.0;
	v9 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2);
	return sub_1404A2010(v10, a3, v8 / v9, (float)a4);
}
// 1404A4D84: variable 'v10' is possibly undefined


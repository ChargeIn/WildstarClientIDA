//----- (000000014042E1B0) ----------------------------------------------------
__int64 __fastcall sub_14042E1B0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // r9

	v1 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v1)
		v2 = *(unsigned int*)(v1 + 264);
	else
		v2 = 0i64;
	return sub_1400EA3E0(a1, "TargetUnitChanged", L"U", v2);
}
// 1409EDF14: using guessed type wchar_t aU_15[2];
// 140C65898: using guessed type __int64 qword_140C65898;


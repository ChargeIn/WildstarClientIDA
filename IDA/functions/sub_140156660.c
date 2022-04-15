//----- (0000000140156660) ----------------------------------------------------
__int64 __fastcall sub_140156660(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rax
	bool v4; // zf
	__int64 v5; // rax

	v2 = (_QWORD*)(a1 + 16);
	*(v2 - 2) = off_140B55048;
	*((_DWORD*)v2 - 2) = 1;
	*(v2 - 2) = off_140B5C868;
	v2[1] = 0i64;
	v2[2] = 0i64;
	v2[3] = 0i64;
	v3 = 0i64;
	do
		v4 = aArialUnicodeMs_1[++v3] == 0;
	while (!v4);
	sub_14001C1B0(v2, (int*)L"Arial Unicode MS", (__int64)&aArialUnicodeMs_1[v3]);
	v5 = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	do
		v4 = aDefault_9[++v5] == 0;
	while (!v4);
	sub_14001C1B0((_QWORD*)(a1 + 48), (int*)L"Default", (__int64)&aDefault_9[v5]);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 80) = 12;
	*(_DWORD*)(a1 + 84) = 8;
	*(_QWORD*)(a1 + 88) = 1065353216i64;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		L"Arial Unicode MS",
		12i64) >= 0)
		*(_DWORD*)(a1 + 92) = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	return a1;
}
// 140A17378: using guessed type wchar_t aArialUnicodeMs_1[17];
// 140A173A0: using guessed type wchar_t aDefault_9[8];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C868: using guessed type __int64 (__fastcall *off_140B5C868[4])();
// 140C65680: using guessed type __int64 qword_140C65680;


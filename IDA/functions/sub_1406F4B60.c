//----- (00000001406F4B60) ----------------------------------------------------
__int64 __fastcall sub_1406F4B60(__int64 a1)
{
	_DWORD* v1; // rdx
	unsigned int v2; // r8d
	int v3; // eax
	BOOL v4; // edx
	__int64 v5; // rcx

	v1 = &unk_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = 0;
	v3 = v1[2];
	v4 = v3 && (v3 != 1 || *v1);
	v5 = *(_QWORD*)(qword_140C65898 + 30088);
	if (v5)
	{
		LOBYTE(v2) = v4;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 144i64))(v5, v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;


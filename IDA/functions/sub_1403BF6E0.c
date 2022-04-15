//----- (00000001403BF6E0) ----------------------------------------------------
void __fastcall sub_1403BF6E0(__int64 a1)
{
	_QWORD* v2; // rdx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	sub_140195D70(a1 + 104);
	*(_DWORD*)(a1 + 104) = 0;
	v2 = *(_QWORD**)(a1 + 120);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 128);
	v3 = *(_QWORD**)(a1 + 128);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	sub_140195D70(a1 + 32);
	*(_DWORD*)(a1 + 32) = 0;
	v4 = *(_QWORD**)(a1 + 48);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 56);
	v5 = *(_QWORD**)(a1 + 56);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
}


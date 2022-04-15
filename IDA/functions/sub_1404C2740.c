//----- (00000001404C2740) ----------------------------------------------------
__int64 __fastcall sub_1404C2740(__int64 a1)
{
	int v1; // r8d
	__int64 v2; // rcx
	__int64* v3; // rax
	__int64* v4; // rdx
	__int64 v5; // rcx

	v1 = *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64);
	v2 = *(_QWORD*)(qword_140C659F0 + 824);
	v3 = *(__int64**)(v2 + 16);
	v4 = *(__int64**)(v2 + 24);
	if (v3 == v4)
		return 0i64;
	while (1)
	{
		v5 = *v3;
		if (*(_DWORD*)(*v3 + 188) == v1)
			break;
		if (++v3 == v4)
			return 0i64;
	}
	if (!v5)
		return 0i64;
	else
		return *(_QWORD*)(v5 + 280);
}
// 140C659F0: using guessed type __int64 qword_140C659F0;


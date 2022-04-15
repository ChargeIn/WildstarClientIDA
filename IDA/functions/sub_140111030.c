//----- (0000000140111030) ----------------------------------------------------
__int64 __fastcall sub_140111030(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax

	if (*(char*)(a1 + 664) < 0)
	{
		v2 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
		sub_140110EE0((_QWORD*)a1, v2);
	}
	v3 = *(_QWORD*)(a1 + 32);
	if (v3 && *(_QWORD*)(v3 + 2880) == a1)
		sub_1400E8BF0(v3);
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
	sub_1400D4070(a1, 0x28u, (char*)a1, "S", v4);
	return 0i64;
}


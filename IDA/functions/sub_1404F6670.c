//----- (00000001404F6670) ----------------------------------------------------
__int64 __fastcall sub_1404F6670(__int64 a1, int* a2, int a3)
{
	__int64 v5; // rcx
	float v6; // xmm0_4
	__int64 result; // rax

	if (*(char*)(a1 + 28) >= 0 || (*(_BYTE*)(a1 + 664) & 2) != 0)
		return sub_1400D2660(a1, a2, a3);
	v5 = *(_QWORD*)(a1 + 2328);
	if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v6 = *(float*)(a1 + 2304);
	*(_DWORD*)(a1 + 1040) = 1;
	result = 0i64;
	if (a3 >= 0)
		*(float*)(a1 + 2304) = fmaxf(0.0, fminf(v6 + 0.1, 1.0));
	else
		*(float*)(a1 + 2304) = fmaxf(0.0, fminf(v6 - 0.1, 1.0));
	return result;
}


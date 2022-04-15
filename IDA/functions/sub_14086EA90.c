//----- (000000014086EA90) ----------------------------------------------------
__int64 __fastcall sub_14086EA90(__int64* a1, __int64 a2)
{
	__int64* v2; // rbx
	__int64* i; // rdi
	__int64 result; // rax

	v2 = (__int64*)a1[27];
	for (i = (__int64*)a1[28]; v2 != i; ++v2)
		result = sub_140865BC0(*v2, *(_DWORD*)(a2 + 24));
	if (*(__int64**)(a2 + 64) == a1)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 48i64))(a2, 0i64);
		sub_140859270(a1 + 21, *(_DWORD*)(a2 + 24));
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	return result;
}


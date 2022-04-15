//----- (00000001401A68E0) ----------------------------------------------------
__int64 __fastcall sub_1401A68E0(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rdi
	int* v4; // rax

	v2 = a2;
	if (!a2)
		v2 = a1[1];
	if ((*(__int64(__fastcall**)(_QWORD*))(*a1 + 48i64))(a1))
		v4 = 0i64;
	else
		v4 = (int*)sub_1401A4F40((__int64)(a1 + 3));
	return sub_1401A79C0(v2, v4);
}


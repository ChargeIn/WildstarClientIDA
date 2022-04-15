//----- (0000000140892FA0) ----------------------------------------------------
__int64 __fastcall sub_140892FA0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	int* v5; // rdx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = sub_140892DB0(a1, 0i64, *(_QWORD*)(a2 + 16), a2 + 32);
	v4 = v3;
	if (!v3)
		return 2i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 72i64))(v3);
	v5 = *(int**)(a2 + 24);
	v7[0] = *v5;
	v7[1] = v5[1];
	v7[2] = sub_14088C3B0(v4);
	sub_14088B940(v4, v7);
	return 1i64;
}


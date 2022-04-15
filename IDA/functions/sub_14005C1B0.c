//----- (000000014005C1B0) ----------------------------------------------------
__int64 __fastcall sub_14005C1B0(__int64 a1, int a2, int a3)
{
	__int64 v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdi
	char v9; // r8

	v6 = sub_140064780(a1, 0i64, 0i64, 64i64);
	v7 = *(_QWORD*)(a1 + 32);
	v8 = v6;
	*(_QWORD*)v6 = *(_QWORD*)(v7 + 40);
	v9 = *(_BYTE*)(v7 + 32);
	*(_QWORD*)(v7 + 40) = v6;
	*(_BYTE*)(v6 + 8) = 5;
	*(_BYTE*)(v6 + 9) = v9 & 3;
	*(_QWORD*)(v6 + 16) = 0i64;
	*(_QWORD*)(v6 + 24) = 0i64;
	*(_DWORD*)(v6 + 56) = 0;
	*(_WORD*)(v6 + 10) = 255;
	*(_QWORD*)(v6 + 32) = &unk_140A12148;
	sub_14005BB80(a1, v6, a2);
	sub_14005BC20(a1, v8, a3);
	return v8;
}


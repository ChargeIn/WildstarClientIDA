//----- (000000014013E130) ----------------------------------------------------
__int64 __fastcall sub_14013E130(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // r14
	int* v9; // rdx
	__int64 v10; // rcx

	*(_QWORD*)a1 = &off_140B58150;
	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_BYTE*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	sub_1400ED880(a2, (__int64*)(a1 + 8));
	*(_QWORD*)a1 = off_140B57FD0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	sub_14013D990(a1 + 112, a4);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = -1i64;
	v6 = *(_QWORD*)(a1 + 72);
	v7 = sub_14018DB00(*(_QWORD*)(a1 + 64), v6 + 1, 8i64);
	v8 = v7;
	*(_QWORD*)&v7[2 * v6] = 0i64;
	v9 = *(int**)(a1 + 64);
	if (v9 != v7)
	{
		sub_1407DB590(v7, v9, 8i64 * *(_QWORD*)(a1 + 72));
		v10 = *(_QWORD*)(a1 + 64);
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		*(_QWORD*)(a1 + 64) = v8;
	}
	*(_QWORD*)(a1 + 72) = v6 + 1;
	return a1;
}
// 140B57FD0: using guessed type __int64 (__fastcall *off_140B57FD0[49])();
// 140B58150: using guessed type __int64 (__fastcall *off_140B58150)();


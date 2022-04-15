//----- (0000000140933DB0) ----------------------------------------------------
__int64 (*__fastcall sub_140933DB0(__int64 a1))(void)
{
	__int64 v1; // rbx
	__int64 v2; // rbp
	__int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // r12
	__int64 v6; // r13
	__int64 v7; // r14
	__int64 v8; // r15
	__int128 v9; // xmm6
	__int128 v10; // xmm7
	__int128 v11; // xmm8
	__int128 v12; // xmm9
	__int128 v13; // xmm10
	__int128 v14; // xmm11
	__int128 v15; // xmm12
	__int128 v16; // xmm13
	__int128 v17; // xmm14
	__int128 v18; // xmm15
	__int64 (*result)(void); // rax
	void* retaddr; // [rsp+0h] [rbp+0h]
	char v21; // [rsp+8h] [rbp+8h] BYREF

	result = qword_140DC5230;
	if (qword_140DC5230)
		return (__int64 (*)(void))qword_140DC5230();
	*(_QWORD*)a1 = qword_140DC5230;
	*(_QWORD*)(a1 + 8) = v1;
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v4;
	*(_QWORD*)(a1 + 40) = v3;
	*(_QWORD*)(a1 + 48) = v5;
	*(_QWORD*)(a1 + 56) = v6;
	*(_QWORD*)(a1 + 64) = v7;
	*(_QWORD*)(a1 + 72) = v8;
	*(_QWORD*)(a1 + 16) = &v21;
	*(_QWORD*)(a1 + 80) = retaddr;
	*(_DWORD*)(a1 + 88) = _mm_getcsr();
	*(_OWORD*)(a1 + 96) = v9;
	*(_OWORD*)(a1 + 112) = v10;
	*(_OWORD*)(a1 + 128) = v11;
	*(_OWORD*)(a1 + 144) = v12;
	*(_OWORD*)(a1 + 160) = v13;
	*(_OWORD*)(a1 + 176) = v14;
	*(_OWORD*)(a1 + 192) = v15;
	*(_OWORD*)(a1 + 208) = v16;
	*(_OWORD*)(a1 + 224) = v17;
	*(_OWORD*)(a1 + 240) = v18;
	return result;
}
// 140933DC3: variable 'v1' is possibly undefined
// 140933DC7: variable 'v2' is possibly undefined
// 140933DCB: variable 'v4' is possibly undefined
// 140933DCF: variable 'v3' is possibly undefined
// 140933DD3: variable 'v5' is possibly undefined
// 140933DD7: variable 'v6' is possibly undefined
// 140933DDB: variable 'v7' is possibly undefined
// 140933DDF: variable 'v8' is possibly undefined
// 140933DFB: variable 'v9' is possibly undefined
// 140933E00: variable 'v10' is possibly undefined
// 140933E05: variable 'v11' is possibly undefined
// 140933E0E: variable 'v12' is possibly undefined
// 140933E17: variable 'v13' is possibly undefined
// 140933E20: variable 'v14' is possibly undefined
// 140933E29: variable 'v15' is possibly undefined
// 140933E32: variable 'v16' is possibly undefined
// 140933E3B: variable 'v17' is possibly undefined
// 140933E44: variable 'v18' is possibly undefined
// 140DC5230: using guessed type __int64 (*qword_140DC5230)(void);


//----- (00000001402A7280) ----------------------------------------------------
__int64 __fastcall sub_1402A7280(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rsi
	_QWORD* v7; // rbx
	_QWORD* v8; // r9
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+24h] [rbp-24h]
	int v14; // [rsp+2Ch] [rbp-1Ch]
	int v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+34h] [rbp-14h]

	v3 = a3;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	v7 = (_QWORD*)(a1 + 16 * (a2 + 14i64));
	if (v7[1] <= (unsigned __int64)a3)
		sub_140275820((__int64*)(a1 + 16 * (a2 + 14i64)), a3 + 1);
	v8 = (_QWORD*)(*v7 + 8 * v3);
	if (!*v8)
	{
		v9 = *(int*)(a1 + 48);
		v10 = *(_QWORD*)(a1 + 112);
		v13 = 4i64;
		v14 = v3;
		v15 = a2;
		v16 = 1;
		v11 = *(_QWORD*)(a1 + 16);
		v12 = dword_140AE7F90[v9];
		(*(void(__fastcall**)(_QWORD, __int64, int*, _QWORD*))(**(_QWORD**)(v11 + 6336) + 80i64))(
			*(_QWORD*)(v11 + 6336),
			v10,
			&v12,
			v8);
	}
	return *(_QWORD*)(*v7 + 8 * v3);
}
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];


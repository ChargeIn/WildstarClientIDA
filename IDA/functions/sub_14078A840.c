//----- (000000014078A840) ----------------------------------------------------
__int64 __fastcall sub_14078A840(__int64 a1, int a2)
{
	__int64 v4; // rcx
	__int64 result; // rax
	int v6[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+2Ch] [rbp-1Ch]
	__int64 v8; // [rsp+34h] [rbp-14h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	v6[2] = 1065353216;
	v4 = *(_QWORD*)(a1 + 80);
	v6[0] = dword_140C39700[a2];
	v6[1] = 0;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0;
	result = (*(__int64(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, v6);
	*(_DWORD*)(a1 + 88) = a2;
	return result;
}
// 140C39700: using guessed type _DWORD dword_140C39700[16];


//----- (00000001409389D0) ----------------------------------------------------
__int64 sub_1409389D0()
{
	__int128* v0; // rdx
	__int64 v1; // rcx
	int v2; // eax
	__int64 result; // rax
	__int128 v4; // [rsp+0h] [rbp-78h]
	__int128 v5; // [rsp+10h] [rbp-68h] BYREF
	__int128 v6; // [rsp+20h] [rbp-58h]
	_OWORD v7[2]; // [rsp+30h] [rbp-48h]
	int v8; // [rsp+50h] [rbp-28h]

	v0 = &v5;
	v8 = 0;
	v1 = 0i64;
	do
	{
		v2 = *(_DWORD*)((char*)&unk_140A2E658 + v1);
		v1 += 4i64;
		v0 = (__int128*)((char*)v0 + 8);
		*(_DWORD*)((char*)&v6 + v1 + 12) = v2;
		*(_DWORD*)((char*)v7 + v1 + 12) = *(_DWORD*)&aWindowlocation[v1 + 12];
		*((_QWORD*)v0 - 1) = 0i64;
	} while (v1 < 16);
	result = v8 | 0x300u;
	dword_140C67330 = v8 | 0x300;
	xmmword_140C672E0 = v4;
	xmmword_140C672F0 = v5;
	xmmword_140C67300 = v6;
	xmmword_140C67320 = v7[1];
	xmmword_140C67310 = v7[0];
	return result;
}
// 140938A42: variable 'v4' is possibly undefined
// 140C672E0: using guessed type __int128 xmmword_140C672E0;
// 140C672F0: using guessed type __int128 xmmword_140C672F0;
// 140C67300: using guessed type __int128 xmmword_140C67300;
// 140C67310: using guessed type __int128 xmmword_140C67310;
// 140C67320: using guessed type __int128 xmmword_140C67320;
// 140C67330: using guessed type int dword_140C67330;


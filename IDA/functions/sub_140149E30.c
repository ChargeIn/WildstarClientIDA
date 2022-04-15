//----- (0000000140149E30) ----------------------------------------------------
__int64 __fastcall sub_140149E30(_QWORD* a1)
{
	__int64 v2; // rsi
	__int128* v3; // rdi
	__int128* v4; // rbx
	__int128* v5; // rax
	int v6; // eax
	BOOL* v7; // rdx
	BOOL v8; // ecx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (__int128*)sub_140056AB0(a1, 2u);
	v4 = (__int128*)sub_140056AB0(a1, 3u);
	v5 = (__int128*)sub_140056AB0(a1, 3u);
	v6 = sub_1401B2960(v2, v3, v4, v5);
	v7 = (BOOL*)a1[2];
	v8 = v6 != 0;
	v7[2] = 1;
	result = 1i64;
	*v7 = v8;
	a1[2] += 16i64;
	return result;
}


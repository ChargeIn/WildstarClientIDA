//----- (000000014011EE70) ----------------------------------------------------
__int64 __fastcall sub_14011EE70(_QWORD* a1)
{
	char* v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rbx
	int v4; // edx
	__int64 result; // rax
	int v6; // edx
	int v7; // edx
	int v8; // edx
	int v9; // edx
	int v10; // edx
	int v11; // edx
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v13; // [rsp+28h] [rbp-20h]

	v1 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v12, v1);
	v3 = sub_14019D200(v2, v13);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (!v3)
		return 0i64;
	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3))
	{
	case 0u:
		v4 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v4)
			v4 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0(v3, v4, *(_BYTE*)(v3 + 39));
		result = 0i64;
		break;
	case 1u:
		v6 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v6)
			v6 = *(_DWORD*)qword_140C63750;
		sub_14002C690(v3, v6, *(_DWORD*)(v3 + 60));
		result = 0i64;
		break;
	case 3u:
		v7 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v7)
			v7 = *(_DWORD*)qword_140C63750;
		sub_14001A770(v3, v7, *(_DWORD*)(v3 + 60));
		result = 0i64;
		break;
	case 5u:
		v8 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v8)
			v8 = *(_DWORD*)qword_140C63750;
		sub_14001A820(v3, v8, *(float*)(v3 + 60));
		result = 0i64;
		break;
	case 9u:
		v11 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v11)
			v11 = *(_DWORD*)qword_140C63750;
		sub_14001AC30(v3, v11, (int*)(v3 + 116));
		return 0i64;
	case 0xCu:
		v10 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v10)
			v10 = *(_DWORD*)qword_140C63750;
		sub_14002C7C0(v3, v10, (__int128*)(v3 + 144));
		result = 0i64;
		break;
	case 0xDu:
		v9 = *(_DWORD*)(v3 + 16);
		if (*(_DWORD*)qword_140C63750 < v9)
			v9 = *(_DWORD*)qword_140C63750;
		sub_14001A9B0(v3, v9, v3 + 256);
		result = 0i64;
		break;
	default:
		return 0i64;
	}
	return result;
}
// 14011EE94: variable 'v2' is possibly undefined
// 140C63750: using guessed type __int64 qword_140C63750;


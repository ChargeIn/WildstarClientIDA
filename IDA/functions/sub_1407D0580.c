//----- (00000001407D0580) ----------------------------------------------------
__int128* __fastcall sub_1407D0580(__int64 a1, _DWORD* a2)
{
	__int128* result; // rax
	char* v3; // rdx
	__int64 v4; // rcx
	__int128 v5; // xmm0

	*a2 = *(_DWORD*)(a1 + 5136);
	a2[1] = *(_DWORD*)(a1 + 5140);
	result = (__int128*)(a1 + 5152);
	v3 = (char*)a2 - a1;
	v4 = 16i64;
	do
	{
		v5 = *result++;
		*(__int128*)((char*)result + (_QWORD)v3 - 5152) = v5;
		--v4;
	} while (v4);
	return result;
}


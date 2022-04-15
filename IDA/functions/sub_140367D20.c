//----- (0000000140367D20) ----------------------------------------------------
__int64 __fastcall sub_140367D20(__int64 a1, __int128* a2)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int128 v4; // xmm0

	result = 6i64;
	v3 = a1 + 1680 - (_QWORD)a2;
	do
	{
		v4 = *a2++;
		*(__int128*)((char*)a2 + v3 - 16) = v4;
		--result;
	} while (result);
	return result;
}


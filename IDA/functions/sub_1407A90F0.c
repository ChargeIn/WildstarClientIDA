//----- (00000001407A90F0) ----------------------------------------------------
__int64 __fastcall sub_1407A90F0(__int64 a1, _QWORD* a2)
{
	unsigned int v2; // ebx
	__int64 v5; // rdx
	__int64 result; // rax

	v2 = 0;
	if (a2[1])
	{
		v5 = 0i64;
		do
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 64i64))(a1, *(unsigned int*)(*a2 + 4 * v5));
			v5 = ++v2;
		} while ((unsigned __int64)v2 < a2[1]);
	}
	return result;
}


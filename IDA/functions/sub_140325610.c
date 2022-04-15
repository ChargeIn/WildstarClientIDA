//----- (0000000140325610) ----------------------------------------------------
__int64 __fastcall sub_140325610(unsigned int* a1)
{
	__int64 v1; // r8
	__int64 result; // rax
	unsigned int* v3; // rdx
	__int64 v4; // rcx

	v1 = *a1;
	result = 0i64;
	if ((_DWORD)v1)
	{
		v3 = (unsigned int*)*((_QWORD*)a1 + 1);
		do
		{
			v4 = *v3++;
			result = v4 + 2860486313i64 * result;
			--v1;
		} while (v1);
	}
	return result;
}


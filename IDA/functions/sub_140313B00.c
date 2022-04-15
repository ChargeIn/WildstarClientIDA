//----- (0000000140313B00) ----------------------------------------------------
__int64 __fastcall sub_140313B00(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	__int64 v3; // r8
	_DWORD* v4; // rdx

	v1 = *(_QWORD*)(a1 + 416);
	result = 0i64;
	v3 = *(unsigned int*)(v1 + 272);
	if (*(_DWORD*)(v1 + 272))
	{
		v4 = *(_DWORD**)(v1 + 288);
		do
		{
			if ((unsigned int)result <= *v4)
				result = (unsigned int)*v4;
			++v4;
			--v3;
		} while (v3);
	}
	return result;
}


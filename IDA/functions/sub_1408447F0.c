//----- (00000001408447F0) ----------------------------------------------------
__int64 __fastcall sub_1408447F0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r8
	__int64 v3; // rdx

	result = qword_140C61FD0;
	v2 = 0i64;
	v3 = qword_140C61FD0;
	if (qword_140C61FD0)
	{
		while (v3 != a1)
		{
			v2 = v3;
			v3 = *(_QWORD*)(v3 + 32);
			if (!v3)
				return result;
		}
		if (v3)
		{
			result = *(_QWORD*)(v3 + 32);
			if (v3 == qword_140C61FD0)
				qword_140C61FD0 = *(_QWORD*)(v3 + 32);
			else
				*(_QWORD*)(v2 + 32) = result;
		}
	}
	return result;
}
// 140C61FD0: using guessed type __int64 qword_140C61FD0;

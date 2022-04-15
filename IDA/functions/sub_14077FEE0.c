//----- (000000014077FEE0) ----------------------------------------------------
__int64 __fastcall sub_14077FEE0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax

	result = sub_14077FE40(a1);
	if (*(_DWORD*)(a1 + 544))
	{
		result = sub_1405B1510(&qword_140C7DFB0);
		if (result)
		{
			if (*(_QWORD*)(result + 32) == *(_QWORD*)(qword_140C635F0 + 5792)
				|| (v3 = *(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 824) + 48i64)) != 0 && (result = v3 + 8) != 0)
			{
				*(_DWORD*)(a1 + 544) = 1;
			}
			else
			{
				result = 0i64;
				*(_DWORD*)(a1 + 240) = 0;
				*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
				*(_DWORD*)(a1 + 544) = 0;
			}
		}
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;


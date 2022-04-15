//----- (00000001400E1EA0) ----------------------------------------------------
__int64 __fastcall sub_1400E1EA0(__int64 a1, __int64(__fastcall*** a2)(_QWORD), __int64(__fastcall*** a3)(_QWORD))
{
	__int64(__fastcall * **v4)(_QWORD); // rcx
	__int64 result; // rax
	__int64(__fastcall * **v8)(_QWORD); // rcx

	v4 = *(__int64(__fastcall****)(_QWORD))(a1 + 1904);
	if (a2 != v4)
	{
		if (v4)
		{
			result = (*v4)[1](v4);
			*(_QWORD*)(a1 + 1904) = 0i64;
		}
		*(_QWORD*)(a1 + 1904) = a2;
		if (a2)
			result = (**a2)(a2);
	}
	v8 = *(__int64(__fastcall****)(_QWORD))(a1 + 1912);
	if (a3 != v8)
	{
		if (v8)
		{
			result = (*v8)[1](v8);
			*(_QWORD*)(a1 + 1912) = 0i64;
		}
		*(_QWORD*)(a1 + 1912) = a3;
		if (a3)
			return (**a3)(a3);
	}
	return result;
}


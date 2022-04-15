//----- (00000001400E9BC0) ----------------------------------------------------
__int64 __fastcall sub_1400E9BC0(__int64 a1, __int64(__fastcall*** a2)(_QWORD))
{
	__int64(__fastcall * **v3)(_QWORD); // rcx
	__int64 result; // rax

	v3 = *(__int64(__fastcall****)(_QWORD))(a1 + 2896);
	if (a2 != v3)
	{
		if (v3)
		{
			result = (*v3)[1](v3);
			*(_QWORD*)(a1 + 2896) = 0i64;
		}
		*(_QWORD*)(a1 + 2896) = a2;
		if (a2)
			return (**a2)(a2);
	}
	return result;
}


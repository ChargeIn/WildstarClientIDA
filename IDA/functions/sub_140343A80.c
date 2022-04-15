//----- (0000000140343A80) ----------------------------------------------------
__int64 __fastcall sub_140343A80(__int64 a1, __int64(__fastcall*** a2)(_QWORD))
{
	__int64 v2; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(a1 + 144) = a2;
	if (a2)
		result = (**a2)(a2);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	return result;
}


//----- (00000001402FBD00) ----------------------------------------------------
__int64 __fastcall sub_1402FBD00(__int64 a1, _QWORD* a2)
{
	void(__fastcall * **v3)(_QWORD); // rcx
	__int64 result; // rax

	v3 = *(void(__fastcall****)(_QWORD))(a1 + 1216);
	if (v3)
	{
		(**v3)(v3);
		result = *(_QWORD*)(a1 + 1216);
		*a2 = result;
	}
	else
	{
		*a2 = 0i64;
	}
	return result;
}


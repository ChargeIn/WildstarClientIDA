//----- (00000001402CED90) ----------------------------------------------------
_QWORD* __fastcall sub_1402CED90(_QWORD* a1, _QWORD* a2)
{
	_QWORD* v3; // rbx
	_QWORD* result; // rax

	if (a1 != a2)
	{
		v3 = a1 + 38;
		do
		{
			*(v3 - 38) = off_140B62800;
			if (*v3)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			v3 += 46;
			result = v3 - 38;
		} while (v3 - 38 != a2);
	}
	return result;
}
// 140B62800: using guessed type __int64 (__fastcall *off_140B62800[11])();


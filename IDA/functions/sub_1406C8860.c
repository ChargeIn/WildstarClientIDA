//----- (00000001406C8860) ----------------------------------------------------
char __fastcall sub_1406C8860(_QWORD* a1)
{
	void(__fastcall * **v2)(_QWORD, __int64); // rdi
	char result; // al

	v2 = sub_1406C5440((__int64)a1);
	if (!v2)
		return (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 504i64))(a1, 0i64);
	result = sub_1400C3420(a1);
	if (!result)
		return ((__int64(__fastcall*)(_QWORD, _QWORD*))(*v2)[5])(v2, a1);
	return result;
}


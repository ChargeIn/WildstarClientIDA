//----- (00000001407B3460) ----------------------------------------------------
__int64 __fastcall sub_1407B3460(__int64 a1, unsigned __int64 a2, _QWORD* a3)
{
	void(__fastcall * **v4)(_QWORD); // rcx

	if (!a3 || a2 >= (__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 3)
		return 2147942487i64;
	v4 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 24) + 8 * a2);
	*a3 = v4;
	(**v4)(v4);
	return 0i64;
}


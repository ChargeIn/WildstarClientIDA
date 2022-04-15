//----- (0000000140572430) ----------------------------------------------------
_DWORD* __fastcall sub_140572430(__int64 a1, unsigned int* a2)
{
	_DWORD* result; // rax
	_QWORD* v3; // rbx

	result = (_DWORD*)sub_1404804A0(qword_140C65970, *a2, 18);
	v3 = result;
	if (result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)result + 40i64))(result);
		if ((_DWORD)result)
		{
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, __int64))(*v3 + 128i64))(v3, 1347241296i64);
			if (result)
			{
				++result[7];
				return (_DWORD*)sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"PlayerPathMissionAdvanced",
					byte_1409ED524,
					v3[6]);
			}
		}
	}
	return result;
}
// 1409ED524: using guessed type _BYTE byte_1409ED524[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;


//----- (0000000140331550) ----------------------------------------------------
__int64 __fastcall sub_140331550(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8
	char v4; // [rsp+38h] [rbp+10h] BYREF

	if ((unsigned __int64)(unsigned __int16)a2 < a1[22])
	{
		result = a1[21];
		v3 = *(_QWORD*)(result + 8i64 * (unsigned __int16)a2);
		if (v3)
		{
			if (!*(_DWORD*)(v3 + 8))
			{
				*(_DWORD*)(v3 + 8) = 1;
				return (*(__int64(__fastcall**)(_QWORD*, __int64, __int64, char*))(*a1 + 240i64))(a1, a2, 2i64, &v4);
			}
		}
	}
	return result;
}


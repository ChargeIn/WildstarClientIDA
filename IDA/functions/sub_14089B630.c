//----- (000000014089B630) ----------------------------------------------------
char __fastcall sub_14089B630(_QWORD* a1)
{
	_QWORD* v1; // rax
	__int64 v3; // rcx
	_QWORD* i; // rbx
	__int64 v5; // rcx

	v1 = (_QWORD*)a1[22];
	if (!*v1)
	{
		v3 = a1[2];
		if (!v3 || (LOBYTE(v1) = sub_1408993F0(v3), !(_BYTE)v1))
		{
			for (i = (_QWORD*)a1[20]; i; i = (_QWORD*)*i)
			{
				v5 = i[1];
				if (v5)
					LOBYTE(v1) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 144i64))(v5);
			}
		}
	}
	return (char)v1;
}


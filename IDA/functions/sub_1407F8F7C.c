//----- (00000001407F8F7C) ----------------------------------------------------
const wchar_t* __fastcall sub_1407F8F7C(int a1)
{
	const wchar_t* result; // rax
	int v2; // ecx
	int v3; // ecx
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	int v22; // ecx
	int v23; // ecx
	int v24; // ecx
	int v25; // ecx
	int v26; // ecx
	int v27; // ecx
	int v28; // ecx
	int v29; // ecx

	if (a1 > -2005532085)
	{
		if (a1 > -2003283963)
		{
			if (a1 <= -1072898044)
			{
				if (a1 == -1072898044)
					return L"Cannot use the NDATA keyword in a parameter entity declaration.";
				if (a1 > -1966669818)
				{
					if (a1 > -1966669567)
					{
						if (a1 > -1966669561)
						{
							switch (a1)
							{
							case -1966669560:
								return L"Failed to create a directory for streaming wavebank data.";
							case -1966669559:
								return L"Invalid audition session.";
							case -1072898046:
								return L"Reference to undefined entity '%1'.";
							case -1072898045:
								return L"Entity '%1' contains an infinite entity reference loop.";
							}
							return L"n/a";
						}
						switch (a1)
						{
						case -1966669561:
							return L"Wave does not exist in auditioned wavebank.";
						case -1966669566:
							return L"Missing a soundbank.";
						case -1966669565:
							return L"Missing an RPC curve.";
						case -1966669564:
							return L"Missing data for an audition command.";
						case -1966669563:
							return L"Unknown command.";
						default:
							return L"Missing a DSP parameter.";
						}
					}
					else if (a1 == -1966669567)
					{
						return L"Error writing a file during auditioning.";
					}
					else
					{
						switch (a1)
						{
						case -1966669817:
							result = L"Invalid data.";
							break;
						case -1966669816:
							result = L"Fail to play due to instance limit.";
							break;
						case -1966669815:
							result = L"Global Settings not loaded.";
							break;
						case -1966669814:
							result = L"Invalid variable index.";
							break;
						case -1966669813:
							result = L"Invalid category.";
							break;
						case -1966669812:
							result = L"Invalid cue index.";
							break;
						case -1966669811:
							result = L"Invalid wave index.";
							break;
						case -1966669810:
							result = L"Invalid track index.";
							break;
						case -1966669809:
							result = L"Invalid sound offset or index.";
							break;
						case -1966669808:
							result = L"Error reading a file.";
							break;
						case -1966669807:
							result = L"Unknown event type.";
							break;
						case -1966669806:
							result = L"Invalid call of method of function from callback.";
							break;
						case -1966669805:
							result = L"No wavebank exists for desired operation.";
							break;
						case -1966669804:
							result = L"Unable to select a variation.";
							break;
						case -1966669803:
							result = L"There can be only one audition engine.";
							break;
						case -1966669802:
							result = L"The wavebank is not prepared.";
							break;
						case -1966669801:
							result = L"No audio device found.";
							break;
						case -1966669800:
							result = L"Invalid entry count for channel maps.";
							break;
						case -1966669799:
							result = L"Time offset for seeking is beyond the cue end.";
							break;
						case -1966669798:
							result = L"Time offset for seeking is beyond the wave end.";
							break;
						case -1966669797:
							result = L"Friendly names are not included in the bank.";
							break;
						default:
							return L"n/a";
						}
					}
				}
				else
				{
					if (a1 == -1966669818)
						return L"Invalid usage.";
					if (a1 > -2003238896)
					{
						if (a1 > -1966669823)
						{
							switch (a1)
							{
							case -1966669822:
								return L"The engine has not been initialized.";
							case -1966669821:
								return L"The engine has expired (demo or pre-release version).";
							case -1966669820:
								return L"No notification callback.";
							default:
								return L"Notification already registered.";
							}
						}
						else if (a1 == -1966669823)
						{
							return L"The engine is already initialized.";
						}
						else
						{
							switch (a1)
							{
							case -2003238895:
								result = L"Invalid number.";
								break;
							case -2003238894:
								result = L"Objects used together must be created from the same factory instance.";
								break;
							case -2003238893:
								result = L"A layer resource can only be in use once at any point in time.";
								break;
							case -2003238892:
								result = L"The pop call did not match the corresponding push call";
								break;
							case -2003238890:
								result = L"The push and pop calls were unbalanced";
								break;
							case -2003238889:
								result = L"Attempt to copy from a render target while a layer or clip rect is applied";
								break;
							case -2003238888:
								result = L"The brush types are incompatible for the call.";
								break;
							case -2003238887:
								result = L"An unknown win32 failure occurred.";
								break;
							case -2003238886:
								result = L"The render target is not compatible with GDI";
								break;
							case -2003238885:
								result = L"A text client drawing effect object is of the wrong type";
								break;
							case -2003238884:
								result = L"The application is holding a reference to the IDWriteTextRenderer interface after the corresp"
									"onding DrawText or DrawTextLayout call has returned. The IDWriteTextRenderer instance will be zombied.";
								break;
							default:
								return L"n/a";
							}
						}
					}
					else
					{
						if (a1 == -2003238896)
							return L"The requested D2D version is not supported.";
						if (a1 <= -2003238904)
						{
							switch (a1)
							{
							case -2003238904:
								return L"An internal error (D2D bug) occurred. On checked builds, we would assert.";
							case -2003283962:
								return L"The given interface is already registered.";
							case -2003238911:
								return L"The object was not in the correct state to process the method.";
							case -2003238910:
								return L"The object has not yet been initialized.";
							case -2003238909:
								return L"The requested opertion is not supported.";
							case -2003238908:
								return L"The geomery scanner failed to process the data.";
							case -2003238907:
								return L"D2D could not access the screen.";
							case -2003238906:
								return L"A valid display state could not be determined.";
							case -2003238905:
								return L"The supplied vector is zero.";
							}
							return L"n/a";
						}
						switch (a1)
						{
						case -2003238903:
							return L"The display format we need to render is not supported by the hardware device.";
						case -2003238902:
							return L"A call to this method is invalid.";
						case -2003238901:
							return L"No HW rendering device is available for this operation.";
						case -2003238900:
							return L"here has been a presentation error that may be recoverable. The caller needs to recreate, rerende"
								"r the entire frame, and reattempt present.";
						case -2003238899:
							return L"Shader construction failed because it was too complex.";
						case -2003238898:
							return L"Shader compilation failed.";
						default:
							return L"Requested DX surface size exceeded maximum texture size.";
						}
					}
				}
				return result;
			}
			if (a1 <= -1072898010)
			{
				if (a1 == -1072898010)
					return L"Expecting: %1.";
				if (a1 > -1072898028)
				{
					switch (a1)
					{
					case -1072898027:
						return L"The attribute '%1' on this element is not defined in the DTD or schema.";
					case -1072898026:
						return L"Attribute '%1' has a value that does not match the fixed value defined in the DTD or schema.";
					case -1072898025:
						return L"Attribute '%1' has an invalid value according to the DTD or schema.";
					case -1072898024:
						return L"Text is not allowed in this element according to the DTD or schema.";
					case -1072898023:
						return L"An attribute declaration cannot contain multiple fixed values: '%1'.";
					case -1072898020:
						return L"Reference to undeclared element: '%1'.";
					case -1072898018:
						return L"Attribute '%1' must be a #FIXED attribute.";
					case -1072898016:
						return L"Required attribute '%1' is missing.";
					}
				}
				else
				{
					switch (a1)
					{
					case -1072898028:
						return L"Element content is invalid according to the DTD or schema.";
					case -1072898043:
						return L"Cannot use a general parsed entity '%1' as the value for attribute '%2'.";
					case -1072898042:
						return L"Cannot use unparsed entity '%1' in an entity reference.";
					case -1072898041:
						return L"Cannot reference an external general parsed entity '%1' in an attribute value.";
					case -1072898035:
						return L"The element '%1' is used but not declared in the DTD or schema.";
					case -1072898034:
						return L"The attribute '%1' references the ID '%2', which is not defined in the document.";
					case -1072898031:
						return L"Element cannot be empty according to the DTD or schema.";
					case -1072898030:
						return L"Element content is incomplete according to the DTD or schema.";
					case -1072898029:
						return L"The name of the top-most element must match the name of the DOCTYPE declaration.";
					}
				}
				return L"n/a";
			}
			if (a1 > 262744)
			{
				if (a1 <= 141953141)
				{
					if (a1 == 141953141)
						return L"Resource not resident in memory";
					if (a1 > 262768)
					{
						v18 = a1 - 262782;
						if (!v18)
							return L"There was no preview pin available, so the capture pin output is being split to provide both capture and preview.";
						v19 = v18 - 2;
						if (!v19)
							return L"The current title was not a sequential set of chapters (PGC), and the returned timing information m"
							"ight not be continuous.";
						v20 = v19 - 12;
						if (!v20)
							return L"The audio stream did not contain sufficient information to determine the contents of each channel.";
						v21 = v20 - 1;
						if (!v21)
							return L"The seek into the movie was not frame accurate.";
						if (v21 == 141690338)
							return L"The call succeeded but there won't be any mipmaps generated";
					}
					else
					{
						if (a1 == 262768)
							return L"The stop time for the sample was not set.";
						v14 = a1 - 262746;
						if (!v14)
							return L"Cannot play back the video stream: format 'RPZA' is not supported.";
						v15 = v14 - 6;
						if (!v15)
							return L"The value returned had to be estimated.  It's accuracy can not be guaranteed.";
						v16 = v15 - 3;
						if (!v16)
							return L"This success code is reserved for internal purposes within ActiveMovie.";
						v17 = v16 - 4;
						if (!v17)
							return L"The stream has been turned off.";
						if (v17 == 1)
							return L"The graph can't be cued because of lack of or corrupt data.";
					}
					return L"n/a";
				}
				if (a1 <= 142213122)
				{
					if (a1 == 142213122)
						return L"Target window is clipped.";
					v22 = a1 - 141953142;
					if (!v22)
						return L"Resource resident in shared memory";
					v23 = v22 - 1;
					if (!v23)
						return L"Desktop display mode has changed";
					v24 = v23 - 1;
					if (!v24)
						return L"Client window is occluded (minimized or other fullscreen)";
					v25 = v24 - 128914;
					if (!v25)
						return L"The call succeeded, but we had to substitute the 3D algorithm";
					if (v25 == 131063)
						return L"The target window or output has been occluded. The application should suspend rendering operations if possible.";
					return L"n/a";
				}
				v26 = a1 - 142213124;
				if (!v26)
					return (const wchar_t*)&word_140B7B704;
				v27 = v26 - 1;
				if (!v27)
					return L"No access to desktop.";
				v28 = v27 - 1;
				if (!v28)
					return (const wchar_t*)&word_140B7B704;
				v29 = v28 - 1;
				if (!v29)
					return L"Display mode has changed";
				if (v29 == 1)
					return L"Display mode is changing";
			}
			else
			{
				if (a1 == 262744)
					return L"Cannot play back the audio stream: no audio hardware is available.";
				if (a1 > 11)
				{
					if (a1 > 262722)
					{
						v10 = a1 - 262725;
						if (!v10)
							return L"The file contained some property settings that were not used.";
						v11 = v10 - 1;
						if (!v11)
							return L"Some connections have failed and have been deferred.";
						v12 = v11 - 10;
						if (!v12)
							return L"The resource specified is no longer needed.";
						v13 = v12 - 4;
						if (!v13)
							return L"A connection could not be made with the media type in the persistent graph, but has been made with "
							"a negotiated media type.";
						if (v13 == 3)
							return L"Cannot play back the video stream: no suitable decompressor could be found.";
					}
					else
					{
						if (a1 == 262722)
							return L"Some of the streams in this movie are in an unsupported format.";
						v6 = a1 - 14;
						if (!v6)
							return L"The system cannot find the drive specified.";
						v7 = v6 - 262133;
						if (!v7)
							return L"End of stream. Sample not updated.";
						v8 = v7 - 256;
						if (!v8)
							return L"The end of the list has been reached.";
						v9 = v8 - 298;
						if (!v9)
							return L"An attempt to add a filter with a duplicate name succeeded with a modified name.";
						if (v9 == 10)
							return L"The state transition has not completed.";
					}
					return L"n/a";
				}
				if (a1 == 11)
					return L"An attempt was made to load a program with an incorrect format.";
				if (a1 > 4)
				{
					v2 = a1 - 5;
					if (!v2)
						return L"Access is denied.";
					v3 = v2 - 1;
					if (!v3)
						return L"The handle is invalid.";
					v4 = v3 - 2;
					if (!v4)
						return L"Not enough storage is available to process this command.";
					v5 = v4 - 1;
					if (!v5)
						return L"The storage control block address is invalid.";
					if (v5 == 1)
						return L"The environment is incorrect.";
				}
				else
				{
					switch (a1)
					{
					case 4:
						return L"The system cannot open the file.";
					case -1072897501:
						return L"The validate method failed because the document does not contain exactly one root node.";
					case -1072897500:
						return L"The validate method failed because a DTD or schema was not specified in the document.";
					case 0:
						return L"The function completed successfully";
					case 1:
						return L"Call successful, but returned FALSE";
					case 2:
						return L"The system cannot find the file specified.";
					case 3:
						return L"The system cannot find the path specified.";
					}
				}
			}
			return L"n/a";
		}
		if (a1 == -2003283963)
			return L"A font collection is obsolete due to changes in the system.";
		if (a1 <= -2005530517)
		{
			if (a1 == -2005530517)
				return L"Invalid device";
			if (a1 <= -2005531771)
			{
				if (a1 == -2005531771)
					return L"Bad value";
				if (a1 > -2005531980)
				{
					if (a1 > -2005531802)
					{
						switch (a1)
						{
						case -2005531801:
							return L"No more objects";
						case -2005531800:
							return L"Bad intrinsics";
						case -2005531799:
							return L"No more stream handles";
						case -2005531798:
							return L"No more data";
						case -2005531797:
							return L"Bad cache file";
						case -2005531796:
							return L"No internet";
						case -2005531772:
							return L"Bad object";
						}
					}
					else
					{
						switch (a1)
						{
						case -2005531802:
							return L"Internal error";
						case -2005531979:
							return L"The mode test has switched to a new mode.";
						case -2005531978:
							return L"D3D has not yet been initialized.";
						case -2005531977:
							return L"The video port is not active";
						case -2005531976:
							return L"The monitor does not have EDID data.";
						case -2005531975:
							return L"The driver does not enumerate display mode refresh rates.";
						case -2005531973:
							return L"Surfaces created by one direct draw device cannot be used directly by another direct draw device.";
						case -2005531804:
							return L"Bad array size";
						case -2005531803:
							return L"Bad data reference";
						}
					}
				}
				else
				{
					if (a1 == -2005531980)
						return L"The mode test has finished executing.";
					if (a1 > -2005532069)
					{
						switch (a1)
						{
						case -2005532052:
							return L"A DC has already been returned for this surface. Only one DC can be retrieved per surface.";
						case -2005532042:
							return L"An attempt was made to allocate non-local video memory from a device that does not support non-lo"
								"cal video memory.";
						case -2005532032:
							return L"The attempt to page lock a surface failed.";
						case -2005532012:
							return L"The attempt to page unlock a surface failed.";
						case -2005531992:
							return L"An attempt was made to page unlock a surface with no outstanding page locks.";
						case -2005531982:
							return L"There is more data available than the specified buffer size could hold";
						case -2005531981:
							return L"The data has expired and is therefore no longer valid.";
						}
					}
					else
					{
						switch (a1)
						{
						case -2005532069:
							return L"Attempt was made to set a palette on a mipmap sublevel";
						case -2005532084:
							return L"This surface can not be restored because it is an implicitly created surface.";
						case -2005532083:
							return L"The surface being used is not a palette-based surface";
						case -2005532082:
							return L"The display is currently in an unsupported mode";
						case -2005532081:
							return L"Operation could not be carried out because there is no mip-map texture mapping hardware present or available.";
						case -2005532080:
							return L"The requested action could not be performed because the surface was of the wrong type.";
						case -2005532072:
							return L"Device does not support optimized surfaces, therefore no video memory optimized surfaces";
						case -2005532071:
							return L"Surface is an optimized surface, but has not yet been allocated any memory";
						case -2005532070:
							return L"Attempt was made to create or set a device window without first setting the focus window";
						}
					}
				}
				return L"n/a";
			}
			if (a1 > -2005530600)
			{
				if (a1 > -2005530522)
				{
					switch (a1)
					{
					case -2005530521:
						return L"More data";
					case -2005530520:
						return L"Device lost";
					case -2005530519:
						return L"Device not reset";
					default:
						return L"Not available";
					}
				}
				else
				{
					if (a1 == -2005530522)
						return L"Not found";
					if (a1 > -2005530594)
					{
						switch (a1)
						{
						case -2005530593:
							return L"Unsupported factor value";
						case -2005530591:
							return L"Conflicting render state";
						case -2005530590:
							return L"Unsupported texture filter";
						case -2005530586:
							return L"Conflicting texture palette";
						case -2005530585:
							return L"Driver internal error";
						}
						return L"n/a";
					}
					switch (a1)
					{
					case -2005530594:
						return L"Conflicting texture filter";
					case -2005530599:
						return L"Unsupported color operation";
					case -2005530598:
						return L"Unsupported color arg";
					case -2005530597:
						return L"Unsupported alpha operation";
					case -2005530596:
						return L"Unsupported alpha arg";
					default:
						return L"Too many operations";
					}
				}
			}
			else if (a1 == -2005530600)
			{
				return L"Wrong texture format";
			}
			else
			{
				switch (a1)
				{
				case -2005531770:
					result = L"Bad type";
					break;
				case -2005531769:
					return L"Not found";
				case -2005531768:
					result = L"Not done yet";
					break;
				case -2005531767:
					return L"File not found";
				case -2005531766:
					result = L"Resource not found";
					break;
				case -2005531765:
					result = L"Bad resource";
					break;
				case -2005531764:
					result = L"Bad file type";
					break;
				case -2005531763:
					result = L"Bad file version";
					break;
				case -2005531762:
					result = L"Bad file float size";
					break;
				case -2005531761:
					result = L"Bad file";
					break;
				case -2005531760:
					result = L"Parse error";
					break;
				case -2005531759:
					return L"Bad array size";
				case -2005531758:
					return L"Bad data reference";
				case -2005531757:
					return L"No more objects";
				case -2005531756:
					return L"No more data";
				case -2005531755:
					return L"Bad cache file";
				default:
					return L"n/a";
				}
			}
			return result;
		}
		if (a1 <= -2005397151)
		{
			if (a1 == -2005397151)
				return L"The object requested was not found (numerically equal to DMUS_E_NOT_FOUND)";
			if (a1 <= -2005529765)
			{
				if (a1 == -2005529765)
					return L"Duplicate named fragment";
				if (a1 > -2005530492)
				{
					switch (a1)
					{
					case -2005529772:
						return L"Can not modify index buffer";
					case -2005529771:
						return L"Invalid mesh";
					case -2005529770:
						return L"Cannot attr sort";
					case -2005529769:
						return L"Skinning not supported";
					case -2005529768:
						return L"Too many influences";
					case -2005529767:
						return L"Invalid data";
					case -2005529766:
						return L"Loaded mesh has no data";
					}
				}
				else
				{
					switch (a1)
					{
					case -2005530492:
						return L"Presentation statistics are disjoint";
					case -2005530516:
						return L"Invalid call";
					case -2005530515:
						return L"Driver invalid call";
					case -2005530512:
						return L"Hardware device was removed";
					case -2005530508:
						return L"Hardware adapter reset by OS";
					case -2005530501:
						return L"Overlay is not supported";
					case -2005530500:
						return L"Overlay format is not supported";
					case -2005530499:
						return L"Contect protection not available";
					case -2005530498:
						return L"Unsupported cryptographic system";
					}
				}
				return L"n/a";
			}
			if (a1 > -2005401450)
			{
				if (a1 == -2005401440)
					return L"Another app has a higher priority level, preventing this call from succeeding";
				if (a1 != -2005401430)
				{
					switch (a1)
					{
					case -2005401420:
						return L"Tried to create a DSBCAPS_CTRLFX buffer shorter than DSBSIZE_FX_MIN milliseconds";
					case -2005401410:
						return L"Attempt to use DirectSound 8 functionality on an older DirectSound object";
					case -2005401400:
						return L"A circular loop of send effects was detected";
					case -2005401390:
						return L"The GUID specified in an audiopath file does not match a valid MIXIN buffer";
					case -2005401380:
						return L"Requested effects are not available";
					}
					return L"n/a";
				}
				return L"This object has not been initialized";
			}
			switch (a1)
			{
			case -2005401450:
				return L"The buffer memory has been lost, and must be restored";
			case -2005529764:
				return L"Can Not remove last item";
			case -2005401590:
				return L"The call failed because resources (such as a priority level) were already being used by another caller";
			case -2005401570:
				return L"The control (vol, pan, etc.) requested by the caller is not available";
			case -2005401550:
				return L"This call is not valid for the current state of this object";
			case -2005401530:
				return L"The caller does not have the priority level required for the function to succeed";
			case -2005401500:
				return L"The specified WAVE format is not supported";
			case -2005401480:
				return L"No sound driver is available for use";
			}
			if (a1 != -2005401470)
				return L"n/a";
			return L"This object is already initialized";
		}
		if (a1 > -2005270492)
		{
			if (a1 > -2003435516)
			{
				switch (a1)
				{
				case -2003369983:
					return L"Requested audio format unsupported.";
				case -2003292288:
					return L"The pixel format is not supported.";
				case -2003283968:
					return L"Indicates an error in an input file such as a font file.";
				case -2003283967:
					return L"Indicates an error originating in DirectWrite code, which is not expected to occur but is safe to recover from.";
				case -2003283966:
					return L"Indicates the specified font does not exist.";
				case -2003283965:
					return L"A font file could not be opened because the file, directory, network location, drive, or other storag"
						"e location does not exist or is unavailable.";
				case -2003283964:
					return L"A font file exists but could not be opened due to access denied, sharing violation, or similar error.";
				}
				return L"n/a";
			}
			if (a1 == -2003435516)
				return L"Device invalidated (unplugged, disabled, etc)";
			if (a1 != -2005139455)
			{
				if (a1 != -2005139454)
				{
					switch (a1)
					{
					case -2005139453:
						return L"Therea are too many unique view objects.";
					case -2005139452:
						return L"Deferred context requires Map-Discard usage pattern";
					case -2003435519:
						return L"Invalid XAudio2 API call or arguments";
					case -2003435518:
						return L"Hardware XMA decoder error";
					case -2003435517:
						return L"Failed to create an audio effect";
					}
					return L"n/a";
				}
				return L"File not found";
			}
		}
		else
		{
			if (a1 == -2005270492)
				return L"Remote desktop client is out of memory.";
			if (a1 > -2005270521)
			{
				switch (a1)
				{
				case -2005270518:
					return L"Was still drawing.";
				case -2005270517:
				case -2005270516:
					return L"The requested functionality is not supported by the device or the driver.";
				case -2005270496:
					return L"An internal driver error occurred.";
				case -2005270495:
					return L"The application attempted to perform an operation on an DXGI output that is only legal after the outp"
						"ut has been claimed for exclusive owenership.";
				case -2005270494:
					return L"The requested functionality is not supported by the device or the driver.";
				case -2005270493:
					return L"Remote desktop client disconnected.";
				}
				return L"n/a";
			}
			if (a1 == -2005270521)
				return L"Device reset due to a badly formed commant.";
			if (a1 != -2005336063)
			{
				if (a1 != -2005336062)
				{
					switch (a1)
					{
					case -2005270527:
						return L"The application has made an erroneous API call that it had enough information to avoid. This error "
							"is intended to denote that the application should be altered to avoid the error. Use of the debug "
							"version of the DXGI.DLL will provide run-time debug output with further information.";
					case -2005270526:
						return L"The item requested was not found. For GetPrivateData calls, this means that the specified GUID had "
							"not been previously associated with the object.";
					case -2005270525:
						return L"The specified size of the destination buffer is too small to hold the requested data.";
					case -2005270524:
						return L"Unsupported.";
					case -2005270523:
						return L"Hardware device removed.";
					case -2005270522:
						return L"Device hung due to badly formed commands.";
					}
					return L"n/a";
				}
				return L"File not found";
			}
		}
		return L"There are too many unique state objects.";
	}
	if (a1 == -2005532085)
		return L"This surface can not be restored because it was created in a different mode.";
	if (a1 > -2147220494)
	{
		if (a1 <= -2147219199)
		{
			if (a1 == -2147219199)
				return L"Could not initialize Direct3D.";
			switch (a1)
			{
			case -2147220481:
				result = L"Device installer errors.";
				break;
			case -2147220480:
				result = L"Registry entry or DLL for class installer invalid or class installer not found.";
				break;
			case -2147220479:
				result = L"The user cancelled the install operation. & The stream already has allocated samples and the surface "
					"doesn't match the sample format.";
				break;
			case -2147220478:
				result = L"The INF file for the selected device could not be found or is invalid or is damaged. & The specified "
					"purpose ID can't be used for the call.";
				break;
			case -2147220477:
				result = L"No stream can be found with the specified attributes.";
				break;
			case -2147220476:
				result = L"Seeking not supported for this object.";
				break;
			case -2147220475:
				result = L"The stream formats are not compatible.";
				break;
			case -2147220474:
				result = L"The sample is busy.";
				break;
			case -2147220473:
				result = L"The object can't accept the call because its initialize function or equivalent has not been called.";
				break;
			case -2147220472:
				result = L"MS_E_SOURCEALREADYDEFINED";
				break;
			case -2147220471:
				result = L"The stream type is not valid for this operation.";
				break;
			case -2147220470:
				result = L"The object is not in running state.";
				break;
			default:
				return L"n/a";
			}
			return result;
		}
		if (a1 > -2005532412)
		{
			if (a1 <= -2005532135)
			{
				if (a1 == -2005532135)
					return L"vertical blank is in progress";
				if (a1 > -2005532285)
				{
					if (a1 > -2005532212)
					{
						switch (a1)
						{
						case -2005532202:
							return L"Height requested by DirectDraw is too large.";
						case -2005532192:
							return L"Size requested by DirectDraw is too large --  The individual height and width are OK.";
						case -2005532182:
							return L"Width requested by DirectDraw is too large.";
						case -2005532162:
							return L"Pixel format requested is unsupported by DirectDraw";
						case -2005532152:
							return L"Bitmask in the pixel format requested is unsupported by DirectDraw";
						case -2005532151:
							return L"The specified stream contains invalid data";
						}
					}
					else
					{
						switch (a1)
						{
						case -2005532212:
							return L"The requested surface is not attached.";
						case -2005532272:
							return L"No src color key specified for this operation.";
						case -2005532262:
							return L"This surface is already attached to the surface it is being attached to.";
						case -2005532252:
							return L"This surface is already a dependency of the surface it is being made a dependency of.";
						case -2005532242:
							return L"Access to this surface is being refused because the surface is already locked by another thread.";
						case -2005532237:
							return L"Access to this surface is being refused because no driver exists which can supply a pointer to th"
								"e surface. This is most likely to happen when attempting to lock the primary surface when no DCI"
								" provider is present. Will also happen on attempts to lock an optimized surface.";
						case -2005532232:
							return L"Access to Surface refused because Surface is obscured.";
						case -2005532222:
							return L"Access to this surface is being refused because the surface is gone. The DIRECTDRAWSURFACE object"
								" representing this surface should have Restore called on it.";
						}
					}
				}
				else
				{
					if (a1 == -2005532285)
						return L"Access to this palette is being refused because the palette is already locked by another thread.";
					if (a1 > -2005532342)
					{
						switch (a1)
						{
						case -2005532337:
							return L"Operation could not be carried out because there is no hardware support for vertical blank synchr"
								"onized operations.";
						case -2005532332:
							return L"Operation could not be carried out because there is no hardware support for zbuffer blting.";
						case -2005532322:
							return L"Overlay surfaces could not be z layered based on their BltOrder because the hardware does not sup"
								"port z layering of overlays.";
						case -2005532312:
							return L"The hardware needed for the requested operation has already been allocated.";
						case -2005532292:
							return L"Out of video memory";
						case -2005532290:
							return L"hardware does not support clipped overlays";
						case -2005532288:
							return L"Can only have ony color key active at one time for overlays";
						}
					}
					else
					{
						switch (a1)
						{
						case -2005532342:
							return L"Operation could not be carried out because there is no texture mapping hardware present or available.";
						case -2005532402:
							return L"Operation could not be carried out because the source and destination rectangles are on the same "
								"surface and overlap each other.";
						case -2005532392:
							return L"Operation could not be carried out because there is no appropriate raster op hardware present or available.";
						case -2005532382:
							return L"Operation could not be carried out because there is no rotation hardware present or available.";
						case -2005532362:
							return L"Operation could not be carried out because there is no hardware support for stretching";
						case -2005532356:
							return L"DirectDrawSurface is not in 4 bit color palette and the requested operation requires 4 bit color palette.";
						case -2005532355:
							return L"DirectDrawSurface is not in 4 bit color index palette and the requested operation requires 4 bit "
								"color index palette.";
						case -2005532352:
							return L"DirectDraw Surface is not in 8 bit color mode and the requested operation requires 8 bit color.";
						}
					}
				}
				return L"n/a";
			}
			switch (a1)
			{
			case -2005532132:
				result = L"Was still drawing";
				break;
			case -2005532130:
				result = L"The specified surface type requires specification of the COMPLEX flag";
				break;
			case -2005532112:
				result = L"Rectangle provided was not horizontally aligned on reqd. boundary";
				break;
			case -2005532111:
				result = L"The GUID passed to DirectDrawCreate is not a valid DirectDraw driver identifier.";
				break;
			case -2005532110:
				result = L"A DirectDraw object representing this driver has already been created for this process.";
				break;
			case -2005532109:
				result = L"A hardware only DirectDraw object creation was attempted but the driver did not support any hardware.";
				break;
			case -2005532108:
				result = L"this process already has created a primary surface";
				break;
			case -2005532107:
				result = L"software emulation not available.";
				break;
			case -2005532106:
				result = L"region passed to Clipper::GetClipList is too small.";
				break;
			case -2005532105:
				result = L"an attempt was made to set a clip list for a clipper objec that is already monitoring an hwnd.";
				break;
			case -2005532104:
				result = L"No clipper object attached to surface object";
				break;
			case -2005532103:
				result = L"Clipper notification requires an HWND or no HWND has previously been set as the CooperativeLevel HWND.";
				break;
			case -2005532102:
				result = L"HWND used by DirectDraw CooperativeLevel has been subclassed, this prevents DirectDraw from restoring state.";
				break;
			case -2005532101:
				result = L"The CooperativeLevel HWND has already been set. It can not be reset while the process has surfaces or"
					" palettes created.";
				break;
			case -2005532100:
				result = L"No palette object attached to this surface.";
				break;
			case -2005532099:
				result = L"No hardware support for 16 or 256 color palettes.";
				break;
			case -2005532098:
				result = L"If a clipper object is attached to the source surface passed into a BltFast call.";
				break;
			case -2005532097:
				result = L"No blter.";
				break;
			case -2005532096:
				result = L"No DirectDraw ROP hardware.";
				break;
			case -2005532095:
				result = L"returned when GetOverlayPosition is called on a hidden overlay";
				break;
			case -2005532094:
				result = L"returned when GetOverlayPosition is called on a overlay that UpdateOverlay has never been called on t"
					"o establish a destionation.";
				break;
			case -2005532093:
				result = L"returned when the position of the overlay on the destionation is no longer legal for that destionation.";
				break;
			case -2005532092:
				result = L"returned when an overlay member is called for a non-overlay surface";
				break;
			case -2005532091:
				result = L"An attempt was made to set the cooperative level when it was already set to exclusive.";
				break;
			case -2005532090:
				result = L"An attempt has been made to flip a surface that is not flippable.";
				break;
			case -2005532089:
				result = L"Can't duplicate primary & 3D surfaces, or surfaces that are implicitly created.";
				break;
			case -2005532088:
				result = L"Surface was not locked.  An attempt to unlock a surface that was not locked at all, or by this proces"
					"s, has been attempted.";
				break;
			case -2005532087:
				result = L"Windows can not create any more DCs, or a DC was requested for a paltte-indexed surface when the surf"
					"ace had no palette AND the display mode was not palette-indexed (in this case DirectDraw cannot sele"
					"ct a proper palette into the DC)";
				break;
			case -2005532086:
				result = L"No DC was ever created for this surface.";
				break;
			default:
				return L"n/a";
			}
			return result;
		}
		if (a1 == -2005532412)
			return L"Operation could not be carried out because there is no overlay hardware present or available.";
		if (a1 > -2147023649)
		{
			if (a1 > -2005532502)
			{
				if (a1 > -2005532452)
				{
					switch (a1)
					{
					case -2005532450:
						return L"No DirectDraw support possible with current display driver";
					case -2005532447:
						return L"Operation requires the application to have exclusive mode but the application does not have exclusive mode.";
					case -2005532442:
						return L"Flipping visible surfaces is not supported.";
					case -2005532432:
						return L"There is no GDI present.";
					case -2005532422:
						return L"Operation could not be carried out because there is no hardware present or available.";
					case -2005532417:
						return L"Requested item was not found";
					}
				}
				else
				{
					switch (a1)
					{
					case -2005532452:
						return L"Operation could not be carried out because there is no hardware support of the dest color key.";
					case -2005532492:
						return L"Operation could not be carried out because there is no alpha accleration hardware present or available.";
					case -2005532491:
						return L"Operation could not be carried out because there is no stereo hardware present or available.";
					case -2005532490:
						return L"Operation could not be carried out because there is no hardware present which supports stereo surfaces";
					case -2005532467:
						return L"no clip list available";
					case -2005532462:
						return L"Operation could not be carried out because there is no color conversion hardware present or available.";
					case -2005532460:
						return L"Create function called without DirectDraw object method SetCooperativeLevel being called.";
					case -2005532457:
						return L"Surface doesn't currently have a color key";
					}
				}
				return L"n/a";
			}
			if (a1 == -2005532502)
				return L"There is no 3D present.";
			if (a1 > -2005532572)
			{
				switch (a1)
				{
				case -2005532562:
					return L"DirectDraw does not support provided Cliplist.";
				case -2005532552:
					return L"DirectDraw does not support the requested mode";
				case -2005532542:
					return L"DirectDraw received a pointer that was an invalid DIRECTDRAW object.";
				case -2005532527:
					return L"pixel format was invalid as specified";
				case -2005532522:
					return L"Rectangle provided was invalid.";
				case -2005532512:
					return L"Operation could not be carried out because one or more surfaces are locked";
				}
				return L"n/a";
			}
			if (a1 == -2005532572)
				return L"One or more of the caps bits passed to the callback are incorrect.";
			if (a1 != -2005532667)
			{
				switch (a1)
				{
				case -2005532662:
					return L"This surface can not be attached to the requested surface.";
				case -2005532652:
					return L"This surface can not be detached from the requested surface.";
				case -2005532632:
					return L"Support is currently not available.";
				case -2005532617:
					return L"An exception was encountered while performing the requested operation";
				case -2005532582:
					return L"Height of rectangle provided is not a multiple of reqd alignment";
				case -2005532577:
					return L"Unable to match primary surface creation request with existing primary surface.";
				}
				return L"n/a";
			}
		}
		else if (a1 != -2147023649)
		{
			if (a1 <= -2147024887)
			{
				if (a1 != -2147024887)
				{
					if (a1 <= -2147219191)
					{
						switch (a1)
						{
						case -2147219191:
							return L"Incorrect version of Direct3D or D3DX.";
						case -2147219198:
							return L"No device could be found with the specified device settings.";
						case -2147219197:
							return L"A media file could not be found.";
						case -2147219196:
							return L"The device interface has a non-zero reference count, meaning that some objects were not released.";
						case -2147219195:
							return L"An error occurred when attempting to create a device.";
						case -2147219194:
							return L"An error occurred when attempting to reset a device.";
						case -2147219193:
							return L"An error occurred in the device create callback function.";
						}
						return L"An error occurred in the device reset callback function.";
					}
					if (a1 == -2147219190)
						return L"The device was removed.";
					if (a1 != -2147024894)
					{
						if (a1 != -2147024893)
						{
							if (a1 != -2147024892)
							{
								if (a1 == -2147024891)
									return L"Access is denied";
								if (a1 == -2147024890)
									return L"Invalid handle";
								if (a1 != -2147024888)
									return L"n/a";
								return L"Not enough storage is available to process this command.";
							}
							return L"The system cannot open the file.";
						}
						return L"The system cannot find the path specified.";
					}
					return L"The system cannot find the file specified.";
				}
				return L"The storage control block address is invalid.";
			}
			if (a1 > -2147024777)
			{
				switch (a1)
				{
				case -2147024726:
					return L"The operation cannot be performed while the device is acquired.";
				case -2147024637:
					return L"No more items.";
				case -2147023746:
					return L"The application requires a newer version of DirectInput.";
				case -2147023743:
					return L"The application was written for an unsupported prerelease version of DirectInput.";
				case -2147023728:
					return L"The specified property ID is not supported for the specified property set.";
				case -2147023726:
					return L"The specified property set is not supported.";
				}
				return L"n/a";
			}
			if (a1 == -2147024777)
				return L"The object could not be created due to an incompatible driver version or mismatched or incomplete driver components.";
			if (a1 != -2147024886)
			{
				if (a1 != -2147024885)
				{
					if (a1 == -2147024884)
						return L"The operation cannot be performed unless the device is acquired.";
					if (a1 == -2147024882)
						return L"Ran out of memory";
					if (a1 != -2147024875)
					{
						if (a1 == -2147024866)
							return L"Access to the device has been lost.  It must be re-acquired.";
						if (a1 == -2147024809)
							return L"An invalid parameter was passed to the returning function";
						return L"n/a";
					}
					return L"This object has not been initialized";
				}
				return L"An attempt was made to load a program with an incorrect format.";
			}
			return L"The environment is incorrect.";
		}
		return L"This object is already initialized";
	}
	if (a1 == -2147220494)
		return L"A registry entry is corrupt.";
	if (a1 > -2147220935)
	{
		if (a1 > -2147220872)
		{
			if (a1 > -2147220736)
			{
				switch (a1)
				{
				case -2147220735:
					return L"DIERR_DRIVERFIRST+1";
				case -2147220734:
					return L"DIERR_DRIVERFIRST+2";
				case -2147220733:
					return L"DIERR_DRIVERFIRST+3";
				case -2147220732:
					return L"DIERR_DRIVERFIRST+4";
				case -2147220731:
					return L"DIERR_DRIVERFIRST+5";
				case -2147220713:
					return L"Debugger is present.";
				}
				return L"n/a";
			}
			if (a1 == -2147220736)
			{
				return L"Device driver-specific codes. Unless the specific driver has been precisely identified, no meaning should"
					" be attributed to these values other than that the driver originated the error.";
			}
			else
			{
				switch (a1)
				{
				case -2147220871:
					result = L"DVD-Video playback graph has not been built yet.";
					break;
				case -2147220870:
					result = L"DVD-Video playback graph building failed.";
					break;
				case -2147220869:
					result = L"DVD-Video playback graph could not be built due to insufficient decoders.";
					break;
				case -2147220868:
					result = L"Version number of DirectDraw not suitable. Make sure to install dx5 or higher version.";
					break;
				case -2147220867:
					result = L"Copy protection cannot be enabled. Please make sure any other copy protected content is not being shown now.";
					break;
				case -2147220865:
					result = L"This object cannot be used anymore as its time has expired.";
					break;
				case -2147220863:
					result = L"The operation cannot be performed at the current playback speed.";
					break;
				case -2147220862:
					result = L"The specified menu doesn't exist.";
					break;
				case -2147220861:
					result = L"The specified command was either cancelled or no longer exists.";
					break;
				case -2147220860:
					result = L"The data did not contain a recognized version.";
					break;
				case -2147220859:
					result = L"The state data was corrupt.";
					break;
				case -2147220858:
					result = L"The state data is from a different disc.";
					break;
				case -2147220857:
					result = L"The region was not compatible with the current drive.";
					break;
				case -2147220856:
					result = L"The requested DVD stream attribute does not exist.";
					break;
				case -2147220855:
					result = L"Currently there is no GoUp (Annex J user function) program chain (PGC).";
					break;
				case -2147220854:
					result = L"The current parental level was too low.";
					break;
				case -2147220853:
					result = L"The current audio is not karaoke content.";
					break;
				case -2147220850:
					result = L"Frame step is not supported on this configuration.";
					break;
				case -2147220849:
					result = L"The specified stream is disabled and cannot be selected.";
					break;
				case -2147220848:
					result = L"The operation depends on the current title number, however the navigator has not yet entered the VT"
						"SM or the title domains, so the 'current' title index is unknown.";
					break;
				case -2147220847:
					result = L"The specified path does not point to a valid DVD disc.";
					break;
				case -2147220846:
					result = L"There is currently no resume information.";
					break;
				case -2147220845:
					result = L"This thread has already blocked this output pin.  There is no need to call IPinFlowControl::Block() again.";
					break;
				case -2147220844:
					result = L"IPinFlowControl::Block() has been called on another thread.  The current thread cannot make any ass"
						"umptions about this pin's block state.";
					break;
				case -2147220843:
					result = L"An operation failed due to a certification failure.";
					break;
				default:
					return L"n/a";
				}
			}
		}
		else if (a1 == -2147220872)
		{
			return L"The specified button is invalid or is not present at the current time, or there is no button present at the"
				" specified location.";
		}
		else
		{
			switch (a1)
			{
			case -2147220934:
				result = L"A full-screen mode is not available.";
				break;
			case -2147220933:
				result = L"Cannot call IVideoWindow methods while in full-screen mode.";
				break;
			case -2147220928:
				result = L"The media type of this file is not recognized.";
				break;
			case -2147220927:
				result = L"The source filter for this file could not be loaded.";
				break;
			case -2147220925:
				result = L"A file appeared to be incomplete.";
				break;
			case -2147220924:
				result = L"The version number of the file is invalid.";
				break;
			case -2147220921:
				result = L"This file is corrupt: it contains an invalid class identifier.";
				break;
			case -2147220920:
				result = L"This file is corrupt: it contains an invalid media type.";
				break;
			case -2147220919:
				result = L"No time stamp has been set for this sample.";
				break;
			case -2147220911:
				result = L"No media time stamp has been set for this sample.";
				break;
			case -2147220910:
				result = L"No media time format has been selected.";
				break;
			case -2147220909:
				result = L"Cannot change balance because audio device is mono only.";
				break;
			case -2147220907:
				return L"Cannot play back the video stream: no suitable decompressor could be found.";
			case -2147220906:
				result = L"Cannot play back the audio stream: no audio hardware is available, or the hardware is not responding.";
				break;
			case -2147220903:
				return L"Cannot play back the video stream: format 'RPZA' is not supported.";
			case -2147220901:
				result = L"ActiveMovie cannot play MPEG movies on this processor.";
				break;
			case -2147220900:
				result = L"Cannot play back the audio stream: the audio format is not supported.";
				break;
			case -2147220899:
				result = L"Cannot play back the video stream: the video format is not supported.";
				break;
			case -2147220898:
				result = L"ActiveMovie cannot play this video stream because it falls outside the constrained standard.";
				break;
			case -2147220897:
				result = L"Cannot perform the requested function on an object that is not in the filter graph.";
				break;
			case -2147220895:
				result = L"Cannot get or set time related information on an object that is using a time format of TIME_FORMAT_NONE.";
				break;
			case -2147220894:
				result = L"The connection cannot be made because the stream is read only and the filter alters the data.";
				break;
			case -2147220892:
				result = L"The buffer is not full enough.";
				break;
			case -2147220891:
				result = L"Cannot play back the file.  The format is not supported.";
				break;
			case -2147220890:
				result = L"Pins cannot connect due to not supporting the same transport.";
				break;
			case -2147220887:
				result = L"The Video CD can't be read correctly by the device or is the data is corrupt.";
				break;
			case -2147220879:
				result = L"There is not enough Video Memory at this display resolution and number of colors. Reducing resolution might help.";
				break;
			case -2147220878:
				result = L"The VideoPort connection negotiation process has failed.";
				break;
			case -2147220877:
				result = L"Either DirectDraw has not been installed or the Video Card capabilities are not suitable. Make sure t"
					"he display is not in 16 color mode.";
				break;
			case -2147220876:
				result = L"No VideoPort hardware is available, or the hardware is not responding.";
				break;
			case -2147220875:
				result = L"No Capture hardware is available, or the hardware is not responding.";
				break;
			case -2147220874:
				result = L"This User Operation is inhibited by DVD Content at this time.";
				break;
			case -2147220873:
				result = L"This Operation is not permitted in the current domain.";
				break;
			default:
				return L"n/a";
			}
		}
	}
	else
	{
		if (a1 == -2147220935)
			return L"This Advise cannot be canceled because it was not successfully set.";
		if (a1 > -2147220970)
		{
			switch (a1)
			{
			case -2147220969:
				result = L"No combination of intermediate filters could be found to make the connection.";
				break;
			case -2147220968:
				result = L"No combination of filters could be found to render the stream.";
				break;
			case -2147220967:
				result = L"Could not change formats dynamically.";
				break;
			case -2147220966:
				result = L"No color key has been set.";
				break;
			case -2147220965:
				result = L"Current pin connection is not using the IOverlay transport.";
				break;
			case -2147220964:
				result = L"Current pin connection is not using the IMemInputPin transport.";
				break;
			case -2147220963:
				result = L"Setting a color key would conflict with the palette already set.";
				break;
			case -2147220962:
				result = L"Setting a palette would conflict with the color key already set.";
				break;
			case -2147220961:
				result = L"No matching color key is available.";
				break;
			case -2147220960:
				result = L"No palette is available.";
				break;
			case -2147220959:
				result = L"Display does not use a palette.";
				break;
			case -2147220958:
				result = L"Too many colors for the current display settings.";
				break;
			case -2147220957:
				result = L"The state changed while waiting to process the sample.";
				break;
			case -2147220956:
				result = L"The operation could not be performed because the filter is not stopped.";
				break;
			case -2147220955:
				result = L"The operation could not be performed because the filter is not paused.";
				break;
			case -2147220954:
				result = L"The operation could not be performed because the filter is not running.";
				break;
			case -2147220953:
				result = L"The operation could not be performed because the filter is in the wrong state.";
				break;
			case -2147220952:
				result = L"The sample start time is after the sample end time.";
				break;
			case -2147220951:
				result = L"The supplied rectangle is invalid.";
				break;
			case -2147220950:
				result = L"This pin cannot use the supplied media type.";
				break;
			case -2147220949:
				result = L"This sample cannot be rendered.";
				break;
			case -2147220948:
				result = L"This sample cannot be rendered because the end of the stream has been reached.";
				break;
			case -2147220947:
				result = L"An attempt to add a filter with a duplicate name failed.";
				break;
			case -2147220946:
				result = L"A time-out has expired.";
				break;
			case -2147220945:
				result = L"The file format is invalid.";
				break;
			case -2147220944:
				result = L"The list has already been exhausted.";
				break;
			case -2147220943:
				result = L"The filter graph is circular.";
				break;
			case -2147220942:
				result = L"Updates are not allowed in this state.";
				break;
			case -2147220941:
				result = L"An attempt was made to queue a command for a time in the past.";
				break;
			case -2147220940:
				result = L"The queued command has already been canceled.";
				break;
			case -2147220939:
				result = L"Cannot render the file because it is corrupt.";
				break;
			case -2147220938:
				result = L"An overlay advise link already exists.";
				break;
			case -2147220936:
				result = L"No full-screen modes are available.";
				break;
			default:
				return L"n/a";
			}
		}
		else
		{
			if (a1 == -2147220970)
				return L"An object or name was not found.";
			if (a1 <= -2147220987)
			{
				if (a1 == -2147220987)
					return L"The operation cannot be performed unless the device is acquired in DISCL_EXCLUSIVE mode. & This operati"
					"on cannot be performed because the filter is active.";
				if (a1 > -2147221164)
				{
					switch (a1)
					{
					case -2147221008:
						return L"CoInitialize has not been called.";
					case -2147221007:
						return L"CoInitialize has already been called.";
					case -2147220992:
						return L"Unable to IDirectInputJoyConfig_Acquire because the user does not have sufficient privileges to cha"
							"nge the joystick configuration. & An invalid media type was specified";
					case -2147220991:
						return L"The device is full. & An invalid media subtype was specified.";
					case -2147220990:
						return L"Not all the requested information fit into the buffer. & This object can only be created as an aggregated object.";
					case -2147220989:
						return L"The effect is not downloaded. & The enumerator has become invalid.";
					case -2147220988:
						return L"The device cannot be reinitialized because there are still effects attached to it. & At least one o"
							"f the pins involved in the operation is already connected.";
					}
				}
				else
				{
					switch (a1)
					{
					case -2147221164:
						return L"Class not registered";
					case -2147483638:
						return L"The data necessary to complete this operation is not yet available.";
					case -2147467263:
						return L"The function called is not supported at this time";
					case -2147467262:
						return L"The requested COM interface is not available";
					case -2147467261:
						return L"Invalid pointer";
					case -2147467260:
						return L"Operation aborted";
					case -2147467259:
						return L"An undetermined error occurred";
					case -2147418113:
						return L"Catastrophic failure";
					case -2147221232:
						return L"This object does not support aggregation";
					}
				}
				return L"n/a";
			}
			switch (a1)
			{
			case -2147220986:
				result = L"The effect could not be downloaded because essential information is missing.  For example, no axes ha"
					"ve been associated with the effect, or no type-specific information has been created. & One of the s"
					"pecified pins supports no media types.";
				break;
			case -2147220985:
				result = L"Attempted to read buffered device data from a device that is not buffered. & There is no common media"
					" type between these pins.";
				break;
			case -2147220984:
				result = L"An attempt was made to modify parameters of an effect while it is playing.  Not all hardware devices "
					"support altering the parameters of an effect while it is playing. & Two pins of the same direction c"
					"annot be connected together.";
				break;
			case -2147220983:
				result = L"The operation could not be completed because the device is not plugged in. & The operation cannot be "
					"performed because the pins are not connected.";
				break;
			case -2147220982:
				result = L"SendDeviceData failed because more information was requested to be sent than can be sent to the devic"
					"e.  Some devices have restrictions on how much data can be sent to them.  (For example, there might "
					"be a limit on the number of buttons that can be pressed at once.) & No sample buffer allocator is available.";
				break;
			case -2147220981:
				result = L"A mapper file function failed because reading or writing the user or IHV settings file failed. & A ru"
					"n-time error occurred.";
				break;
			case -2147220980:
				result = L"No buffer space has been set";
				break;
			case -2147220979:
				result = L"The buffer is not big enough.";
				break;
			case -2147220978:
				result = L"An invalid alignment was specified.";
				break;
			case -2147220977:
				result = L"Cannot change allocated memory while the filter is active.";
				break;
			case -2147220976:
				result = L"One or more buffers are still active.";
				break;
			case -2147220975:
				result = L"Cannot allocate a sample when the allocator is not active.";
				break;
			case -2147220974:
				result = L"Cannot allocate memory because no size has been set.";
				break;
			case -2147220973:
				result = L"Cannot lock for synchronization because no clock has been defined.";
				break;
			case -2147220972:
				result = L"Quality messages could not be sent because no quality sink has been defined.";
				break;
			case -2147220971:
				result = L"A required interface has not been implemented.";
				break;
			default:
				return L"n/a";
			}
		}
	}
	return result;
}
// 1407F96B6: conditional instruction was optimized away because ecx.4==80040908
// 1407FA0C7: conditional instruction was optimized away because ecx.4==8876081D
// 1407FA177: conditional instruction was optimized away because ecx.4==8876086A
// 1407FA71D: conditional instruction was optimized away because ecx.4==8899000F
// 1407FA815: conditional instruction was optimized away because ecx.4==8AC70005
// 1407FA95C: conditional instruction was optimized away because ecx.4==8AC70106
// 14098C198: using guessed type wchar_t aDierrDriverfir_3[20];
// 14098C1C0: using guessed type wchar_t aDierrDriverfir_2[20];
// 14098C1E8: using guessed type wchar_t aDierrDriverfir_1[20];
// 14098C210: using guessed type wchar_t aDierrDriverfir_0[20];
// 14098C238: using guessed type wchar_t aDierrDriverfir[20];
// 14098F010: using guessed type wchar_t aMsESourcealrea[26];
// 140993B80: using guessed type wchar_t aTheFunctionCom[36];
// 140993BD0: using guessed type wchar_t aCallSuccessful[36];
// 140993C18: using guessed type wchar_t aCatastrophicFa[21];
// 140993C50: using guessed type wchar_t aTheFunctionCal[50];
// 140993CB8: using guessed type wchar_t aRanOutOfMemory[18];
// 140993CE0: using guessed type wchar_t aAnInvalidParam[58];
// 140993D60: using guessed type wchar_t aTheRequestedCo[45];
// 140993DC0: using guessed type wchar_t aInvalidPointer[16];
// 140993DE0: using guessed type wchar_t aInvalidHandle_0[15];
// 140993E00: using guessed type wchar_t aOperationAbort[18];
// 140993E28: using guessed type wchar_t aAnUndetermined[31];
// 140993E68: using guessed type wchar_t aAccessIsDenied[17];
// 140993E90: using guessed type wchar_t aTheDataNecessa[68];
// 140993F18: using guessed type wchar_t aClassNotRegist[21];
// 140993F50: using guessed type wchar_t aCoinitializeHa_0[34];
// 140993FA0: using guessed type wchar_t aCoinitializeHa[38];
// 140993FF0: using guessed type wchar_t aThisObjectDoes[41];
// 140994050: using guessed type wchar_t aTheSystemCanno_0[43];
// 1409940B0: using guessed type wchar_t aTheSystemCanno[43];
// 140994110: using guessed type wchar_t aTheSystemCanno_1[33];
// 140994158: using guessed type wchar_t aAccessIsDenied_0[18];
// 140994180: using guessed type wchar_t aTheHandleIsInv[23];
// 1409941B0: using guessed type wchar_t aNotEnoughStora[57];
// 140994230: using guessed type wchar_t aTheStorageCont[46];
// 140994290: using guessed type wchar_t aTheEnvironment[30];
// 1409942D0: using guessed type wchar_t aAnAttemptWasMa_5[64];
// 140994350: using guessed type wchar_t aTheSystemCanno_2[44];
// 1409943B0: using guessed type wchar_t aThisObjectIsAl[35];
// 140994400: using guessed type wchar_t aThisSurfaceCan_0[59];
// 140994480: using guessed type wchar_t aThisSurfaceCan[61];
// 140994500: using guessed type wchar_t aSupportIsCurre[36];
// 140994550: using guessed type wchar_t aAnExceptionWas[70];
// 1409945E0: using guessed type wchar_t aHeightOfRectan[65];
// 140994670: using guessed type wchar_t aUnableToMatchP[80];
// 140994710: using guessed type wchar_t aOneOrMoreOfThe[67];
// 1409947A0: using guessed type wchar_t aDirectdrawDoes_0[47];
// 140994800: using guessed type wchar_t aDirectdrawDoes[47];
// 140994860: using guessed type wchar_t aDirectdrawRece[69];
// 1409948F0: using guessed type wchar_t aPixelFormatWas[38];
// 140994940: using guessed type wchar_t aRectangleProvi[32];
// 140994980: using guessed type wchar_t aOperationCould[75];
// 140994A18: using guessed type wchar_t aThereIsNo3dPre[24];
// 140994A50: using guessed type wchar_t aOperationCould_3[104];
// 140994B20: using guessed type wchar_t aOperationCould_2[93];
// 140994BE0: using guessed type wchar_t aOperationCould_1[103];
// 140994CB0: using guessed type wchar_t aNoClipListAvai[23];
// 140994CE0: using guessed type wchar_t aOperationCould_0[103];
// 140994DB0: using guessed type wchar_t aCreateFunction[90];
// 140994E70: using guessed type wchar_t aSurfaceDoesnTC[43];
// 140994ED0: using guessed type wchar_t aOperationCould_4[95];
// 140994F90: using guessed type wchar_t aNoDirectdrawSu[59];
// 140995010: using guessed type wchar_t aOperationRequi[108];
// 1409950F0: using guessed type wchar_t aFlippingVisibl[44];
// 140995148: using guessed type wchar_t aThereIsNoGdiPr[25];
// 140995180: using guessed type wchar_t aOperationCould_5[86];
// 140995230: using guessed type wchar_t aRequestedItemW[29];
// 140995270: using guessed type wchar_t aOperationCould_6[94];
// 140995330: using guessed type wchar_t aOperationCould_10[129];
// 140995440: using guessed type wchar_t aOperationCould_9[108];
// 140995520: using guessed type wchar_t aOperationCould_8[95];
// 1409955E0: using guessed type wchar_t aOperationCould_7[87];
// 140995690: using guessed type wchar_t aDirectdrawsurf_0[106];
// 140995770: using guessed type wchar_t aDirectdrawsurf[118];
// 140995860: using guessed type wchar_t aDirectdrawSurf[96];
// 140995920: using guessed type wchar_t aOperationCould_11[102];
// 1409959F0: using guessed type wchar_t aOperationCould_13[116];
// 140995AE0: using guessed type wchar_t aOperationCould_12[92];
// 140995BA0: using guessed type wchar_t aOverlaySurface[126];
// 140995CA0: using guessed type wchar_t aTheHardwareNee[76];
// 140995D40: using guessed type wchar_t aHardwareDoesNo[43];
// 140995DA0: using guessed type wchar_t aCanOnlyHaveOny[60];
// 140995E20: using guessed type wchar_t aAccessToThisPa[97];
// 140995EF0: using guessed type wchar_t aNoSrcColorKeyS[47];
// 140995F50: using guessed type wchar_t aThisSurfaceIsA_0[73];
// 140995FF0: using guessed type wchar_t aThisSurfaceIsA[86];
// 1409960A0: using guessed type wchar_t aAccessToThisSu_1[97];
// 140996170: using guessed type wchar_t aAccessToThisSu_0[274];
// 1409963A0: using guessed type wchar_t aAccessToSurfac[55];
// 140996410: using guessed type wchar_t aAccessToThisSu[158];
// 140996550: using guessed type wchar_t aTheRequestedSu[39];
// 1409965A0: using guessed type wchar_t aHeightRequeste[45];
// 140996600: using guessed type wchar_t aSizeRequestedB[86];
// 1409966B0: using guessed type wchar_t aWidthRequested[44];
// 140996710: using guessed type wchar_t aPixelFormatReq[52];
// 140996780: using guessed type wchar_t aBitmaskInThePi[67];
// 140996810: using guessed type wchar_t aTheSpecifiedSt_0[43];
// 140996868: using guessed type wchar_t aVerticalBlankI[30];
// 1409968A8: using guessed type wchar_t aWasStillDrawin[18];
// 1409968D0: using guessed type wchar_t aTheSpecifiedSu[70];
// 140996960: using guessed type wchar_t aRectangleProvi_0[66];
// 1409969F0: using guessed type wchar_t aTheGuidPassedT[81];
// 140996AA0: using guessed type wchar_t aADirectdrawObj[88];
// 140996B50: using guessed type wchar_t aAHardwareOnlyD[102];
// 140996C20: using guessed type wchar_t aThisProcessAlr[51];
// 140996C90: using guessed type wchar_t aSoftwareEmulat[34];
// 140996CE0: using guessed type wchar_t aRegionPassedTo[52];
// 140996D50: using guessed type wchar_t aAnAttemptWasMa_1[95];
// 140996E10: using guessed type wchar_t aNoClipperObjec[45];
// 140996E70: using guessed type wchar_t aClipperNotific[103];
// 140996F40: using guessed type wchar_t aHwndUsedByDire[109];
// 140997020: using guessed type wchar_t aTheCooperative[120];
// 140997110: using guessed type wchar_t aNoPaletteObjec[44];
// 140997170: using guessed type wchar_t aNoHardwareSupp[50];
// 1409971E0: using guessed type wchar_t aIfAClipperObje[82];
// 140997288: using guessed type wchar_t aNoBlter[10];
// 1409972A0: using guessed type wchar_t aNoDirectdrawRo[28];
// 1409972E0: using guessed type wchar_t aReturnedWhenGe[63];
// 140997360: using guessed type wchar_t aReturnedWhenGe_0[129];
// 140997470: using guessed type wchar_t aReturnedWhenTh[104];
// 140997540: using guessed type wchar_t aReturnedWhenAn[68];
// 1409975D0: using guessed type wchar_t aAnAttemptWasMa_2[87];
// 140997680: using guessed type wchar_t aAnAttemptHasBe[66];
// 140997710: using guessed type wchar_t aCanTDuplicateP[80];
// 1409977B0: using guessed type wchar_t aSurfaceWasNotL[124];
// 1409978B0: using guessed type wchar_t aWindowsCanNotC[234];
// 140997A90: using guessed type wchar_t aNoDcWasEverCre[41];
// 140997AF0: using guessed type wchar_t aThisSurfaceCan_1[77];
// 140997B90: using guessed type wchar_t aThisSurfaceCan_2[78];
// 140997C30: using guessed type wchar_t aTheSurfaceBein[54];
// 140997CA0: using guessed type wchar_t aTheDisplayIsCu[48];
// 140997D00: using guessed type wchar_t aOperationCould_14[110];
// 140997DE0: using guessed type wchar_t aTheRequestedAc[87];
// 140997E90: using guessed type wchar_t aDeviceDoesNotS[89];
// 140997F50: using guessed type wchar_t aSurfaceIsAnOpt[75];
// 140997FF0: using guessed type wchar_t aAttemptWasMade[89];
// 1409980B0: using guessed type wchar_t aAttemptWasMade_0[55];
// 140998120: using guessed type wchar_t aADcHasAlreadyB[91];
// 1409981E0: using guessed type wchar_t aAnAttemptWasMa_4[115];
// 1409982D0: using guessed type wchar_t aTheAttemptToPa_0[43];
// 140998330: using guessed type wchar_t aTheAttemptToPa[45];
// 140998390: using guessed type wchar_t aAnAttemptWasMa_3[77];
// 140998430: using guessed type wchar_t aThereIsMoreDat[71];
// 1409984C0: using guessed type wchar_t aTheDataHasExpi[55];
// 140998530: using guessed type wchar_t aTheModeTestHas[38];
// 140998580: using guessed type wchar_t aTheModeTestHas_0[42];
// 1409985E0: using guessed type wchar_t aD3dHasNotYetBe[34];
// 140998628: using guessed type wchar_t aTheVideoPortIs[29];
// 140998670: using guessed type wchar_t aTheMonitorDoes[37];
// 1409986C0: using guessed type wchar_t aTheDriverDoesN[58];
// 140998740: using guessed type wchar_t aSurfacesCreate[98];
// 140998810: using guessed type wchar_t aTheApplication_0[57];
// 140998890: using guessed type wchar_t aTheApplication[82];
// 140998940: using guessed type wchar_t aTheObjectCould[117];
// 140998A30: using guessed type wchar_t aThisObjectHasN[37];
// 140998A80: using guessed type wchar_t aAccessToTheDev[61];
// 140998B00: using guessed type wchar_t aTheOperationCa_2[64];
// 140998B80: using guessed type wchar_t aTheOperationCa_1[65];
// 140998C10: using guessed type wchar_t aUnableToIdirec[169];
// 140998D70: using guessed type wchar_t aTheDeviceIsFul[62];
// 140998DF0: using guessed type wchar_t aNotAllTheReque[114];
// 140998EE0: using guessed type wchar_t aTheEffectIsNot[67];
// 140998F70: using guessed type wchar_t aTheDeviceCanno[158];
// 1409990B0: using guessed type wchar_t aTheOperationCa[156];
// 1409991F0: using guessed type wchar_t aTheEffectCould[240];
// 1409993D0: using guessed type wchar_t aAttemptedToRea[127];
// 1409994D0: using guessed type wchar_t aAnAttemptWasMa[230];
// 1409996A0: using guessed type wchar_t aTheOperationCo[147];
// 1409997D0: using guessed type wchar_t aSenddevicedata[310];
// 140999A40: using guessed type wchar_t aAMapperFileFun[124];
// 140999B38: using guessed type wchar_t aNoMoreItems[15];
// 140999B60: using guessed type wchar_t aDeviceDriverSp[185];
// 140999CD8: using guessed type wchar_t aDeviceInstalle[25];
// 140999D10: using guessed type wchar_t aRegistryEntryO[80];
// 140999DB0: using guessed type wchar_t aTheUserCancell[134];
// 140999EC0: using guessed type wchar_t aTheInfFileForT[140];
// 140999FD8: using guessed type wchar_t aBadArraySize[15];
// 140999FF8: using guessed type wchar_t aBadDataReferen[19];
// 14099A020: using guessed type wchar_t aInternalError[15];
// 14099A040: using guessed type wchar_t aNoMoreObjects[16];
// 14099A060: using guessed type wchar_t aBadIntrinsics[15];
// 14099A080: using guessed type wchar_t aNoMoreStreamHa[23];
// 14099A0B0: using guessed type wchar_t aNoMoreData[13];
// 14099A0D0: using guessed type wchar_t aBadCacheFile[15];
// 14099A0F0: using guessed type wchar_t aNoInternet[12];
// 14099A108: using guessed type wchar_t aWrongTextureFo[21];
// 14099A138: using guessed type wchar_t aUnsupportedCol_0[28];
// 14099A170: using guessed type wchar_t aUnsupportedCol[22];
// 14099A1A0: using guessed type wchar_t aUnsupportedAlp_0[28];
// 14099A1D8: using guessed type wchar_t aUnsupportedAlp[22];
// 14099A208: using guessed type wchar_t aTooManyOperati[20];
// 14099A230: using guessed type wchar_t aConflictingTex[27];
// 14099A268: using guessed type wchar_t aUnsupportedFac[25];
// 14099A2A0: using guessed type wchar_t aConflictingRen[25];
// 14099A2D8: using guessed type wchar_t aUnsupportedTex[27];
// 14099A310: using guessed type wchar_t aConflictingTex_0[28];
// 14099A348: using guessed type wchar_t aDriverInternal[22];
// 14099A378: using guessed type wchar_t aNotFound[10];
// 14099A390: using guessed type wchar_t aMoreData[10];
// 14099A3A8: using guessed type wchar_t aDeviceLost[12];
// 14099A3C0: using guessed type wchar_t aDeviceNotReset[17];
// 14099A3E8: using guessed type wchar_t aNotAvailable[14];
// 14099A408: using guessed type wchar_t aOutOfVideoMemo[20];
// 14099A430: using guessed type wchar_t aInvalidDevice[15];
// 14099A450: using guessed type wchar_t aInvalidCall[13];
// 14099A470: using guessed type wchar_t aDriverInvalidC[20];
// 14099A4A0: using guessed type wchar_t aTheCallSucceed[60];
// 14099A518: using guessed type wchar_t aHardwareDevice[28];
// 14099A550: using guessed type wchar_t aResourceNotRes[32];
// 14099A590: using guessed type wchar_t aResourceReside[35];
// 14099A5E0: using guessed type wchar_t aDesktopDisplay[33];
// 14099A630: using guessed type wchar_t aClientWindowIs[58];
// 14099A6A8: using guessed type wchar_t aHardwareAdapte[29];
// 14099A6E8: using guessed type wchar_t aOverlayIsNotSu[25];
// 14099A720: using guessed type wchar_t aOverlayFormatI[32];
// 14099A760: using guessed type wchar_t aContectProtect[33];
// 14099A7B0: using guessed type wchar_t aUnsupportedCry[33];
// 14099A800: using guessed type wchar_t aPresentationSt[37];
// 14099A850: using guessed type wchar_t aCanNotModifyIn[28];
// 14099A888: using guessed type wchar_t aInvalidMesh[13];
// 14099A8A8: using guessed type wchar_t aCannotAttrSort[17];
// 14099A8D0: using guessed type wchar_t aSkinningNotSup[23];
// 14099A900: using guessed type wchar_t aTooManyInfluen[20];
// 14099A928: using guessed type wchar_t aInvalidData[13];
// 14099A948: using guessed type wchar_t aLoadedMeshHasN[24];
// 14099A978: using guessed type wchar_t aDuplicateNamed[25];
// 14099A9B0: using guessed type wchar_t aCanNotRemoveLa[25];
// 14099A9E8: using guessed type wchar_t aBadObject[11];
// 14099AA00: using guessed type wchar_t aBadValue[10];
// 14099AA18: using guessed type wchar_t aBadType[9];
// 14099AA30: using guessed type wchar_t aNotDoneYet[13];
// 14099AA50: using guessed type wchar_t aFileNotFound_0[15];
// 14099AA70: using guessed type wchar_t aResourceNotFou[19];
// 14099AA98: using guessed type wchar_t aBadResource[13];
// 14099AAB8: using guessed type wchar_t aBadFileType[14];
// 14099AAD8: using guessed type wchar_t aBadFileVersion[17];
// 14099AB00: using guessed type wchar_t aBadFileFloatSi[20];
// 14099AB28: using guessed type wchar_t aBadFile[9];
// 14099AB40: using guessed type wchar_t aParseError[12];
// 14099AB60: using guessed type wchar_t aTheCallSucceed_0[62];
// 14099ABE0: using guessed type wchar_t aTheCallFailedB[103];
// 14099ACB0: using guessed type wchar_t aTheControlVolP[70];
// 14099AD40: using guessed type wchar_t aThisCallIsNotV[60];
// 14099ADC0: using guessed type wchar_t aTheCallerDoesN[81];
// 14099AE70: using guessed type wchar_t aTheSpecifiedWa[43];
// 14099AED0: using guessed type wchar_t aNoSoundDriverI[37];
// 14099AF20: using guessed type wchar_t aTheBufferMemor[54];
// 14099AF90: using guessed type wchar_t aAnotherAppHasA[78];
// 14099B030: using guessed type wchar_t aTriedToCreateA[81];
// 14099B0E0: using guessed type wchar_t aAttemptToUseDi[74];
// 14099B180: using guessed type wchar_t aACircularLoopO[45];
// 14099B1E0: using guessed type wchar_t aTheGuidSpecifi[76];
// 14099B280: using guessed type wchar_t aTheObjectReque[75];
// 14099B320: using guessed type wchar_t aRequestedEffec[36];
// 14099B368: using guessed type wchar_t aNoBufferSpaceH[29];
// 14099B3A8: using guessed type wchar_t aTheBufferIsNot[30];
// 14099B3F0: using guessed type wchar_t aAnInvalidAlign[36];
// 14099B440: using guessed type wchar_t aCannotChangeAl[59];
// 14099B4C0: using guessed type wchar_t aOneOrMoreBuffe[38];
// 14099B510: using guessed type wchar_t aCannotAllocate[59];
// 14099B590: using guessed type wchar_t aCannotAllocate_0[53];
// 14099B600: using guessed type wchar_t aCannotLockForS[67];
// 14099B690: using guessed type wchar_t aQualityMessage[77];
// 14099B730: using guessed type wchar_t aARequiredInter[47];
// 14099B790: using guessed type wchar_t aAnObjectOrName[33];
// 14099B7E0: using guessed type wchar_t aNoCombinationO[78];
// 14099B880: using guessed type wchar_t aNoCombinationO_0[63];
// 14099B900: using guessed type wchar_t aCouldNotChange[38];
// 14099B950: using guessed type wchar_t aNoColorKeyHasB[27];
// 14099B990: using guessed type wchar_t aCurrentPinConn[60];
// 14099BA10: using guessed type wchar_t aCurrentPinConn_0[64];
// 14099BA90: using guessed type wchar_t aSettingAColorK[65];
// 14099BB20: using guessed type wchar_t aSettingAPalett[65];
// 14099BBB0: using guessed type wchar_t aNoMatchingColo[36];
// 14099BBF8: using guessed type wchar_t aNoPaletteIsAva[25];
// 14099BC30: using guessed type wchar_t aDisplayDoesNot[32];
// 14099BC70: using guessed type wchar_t aTooManyColorsF[50];
// 14099BCE0: using guessed type wchar_t aTheStateChange[55];
// 14099BD50: using guessed type wchar_t aTheOperationCo_0[72];
// 14099BDE0: using guessed type wchar_t aTheOperationCo_1[71];
// 14099BE70: using guessed type wchar_t aTheOperationCo_2[72];
// 14099BF00: using guessed type wchar_t aTheOperationCo_3[79];
// 14099BFA0: using guessed type wchar_t aTheSampleStart[52];
// 14099C010: using guessed type wchar_t aTheSuppliedRec[35];
// 14099C060: using guessed type wchar_t aThisPinCannotU[45];
// 14099C0C0: using guessed type wchar_t aThisSampleCann[32];
// 14099C100: using guessed type wchar_t aThisSampleCann_0[79];
// 14099C1A0: using guessed type wchar_t aAnAttemptToAdd[57];
// 14099C220: using guessed type wchar_t aAnAttemptToAdd_0[81];
// 14099C2C8: using guessed type wchar_t aATimeOutHasExp[24];
// 14099C2F8: using guessed type wchar_t aTheFileFormatI[28];
// 14099C330: using guessed type wchar_t aTheListHasAlre[37];
// 14099C380: using guessed type wchar_t aTheFilterGraph[30];
// 14099C3C0: using guessed type wchar_t aUpdatesAreNotA[39];
// 14099C410: using guessed type wchar_t aAnAttemptWasMa_0[63];
// 14099C490: using guessed type wchar_t aTheQueuedComma[46];
// 14099C4F0: using guessed type wchar_t aCannotRenderTh[46];
// 14099C550: using guessed type wchar_t aAnOverlayAdvis[39];
// 14099C5A0: using guessed type wchar_t aTheStateTransi[40];
// 14099C5F0: using guessed type wchar_t aNoFullScreenMo[36];
// 14099C640: using guessed type wchar_t aThisAdviseCann[68];
// 14099C6D0: using guessed type wchar_t aAFullScreenMod[37];
// 14099C720: using guessed type wchar_t aCannotCallIvid[60];
// 14099C7A0: using guessed type wchar_t aTheMediaTypeOf[47];
// 14099C800: using guessed type wchar_t aTheSourceFilte[53];
// 14099C870: using guessed type wchar_t aSomeOfTheStrea[64];
// 14099C8F0: using guessed type wchar_t aAFileAppearedT[34];
// 14099C940: using guessed type wchar_t aTheVersionNumb[43];
// 14099C9A0: using guessed type wchar_t aTheFileContain[62];
// 14099CA20: using guessed type wchar_t aSomeConnection[53];
// 14099CA90: using guessed type wchar_t aThisFileIsCorr[63];
// 14099CB10: using guessed type wchar_t aThisFileIsCorr_0[57];
// 14099CB88: using guessed type wchar_t aARegistryEntry[29];
// 14099CBD0: using guessed type wchar_t aTheEndOfTheLis[38];
// 14099CC20: using guessed type wchar_t aNoTimeStampHas[44];
// 14099CC80: using guessed type wchar_t aTheResourceSpe[44];
// 14099CCE0: using guessed type wchar_t aNoMediaTimeSta[50];
// 14099CD50: using guessed type wchar_t aNoMediaTimeFor[40];
// 14099CDA0: using guessed type wchar_t aCannotChangeBa[57];
// 14099CE20: using guessed type wchar_t aAConnectionCou[124];
// 14099CF20: using guessed type wchar_t aCannotPlayBack[76];
// 14099CFC0: using guessed type wchar_t aCannotPlayBack_0[102];
// 14099D090: using guessed type wchar_t aCannotPlayBack_5[67];
// 14099D120: using guessed type wchar_t aCannotPlayBack_1[67];
// 14099D1B0: using guessed type wchar_t aActivemovieCan[55];
// 14099D220: using guessed type wchar_t aCannotPlayBack_2[70];
// 14099D2B0: using guessed type wchar_t aCannotPlayBack_3[70];
// 14099D340: using guessed type wchar_t aActivemovieCan_0[93];
// 14099D400: using guessed type wchar_t aCannotPerformT[84];
// 14099D4B0: using guessed type wchar_t aTheValueReturn[78];
// 14099D550: using guessed type wchar_t aCannotGetOrSet[105];
// 14099D630: using guessed type wchar_t aTheConnectionC[94];
// 14099D6F0: using guessed type wchar_t aThisSuccessCod[72];
// 14099D780: using guessed type wchar_t aTheBufferIsNot_0[31];
// 14099D7C0: using guessed type wchar_t aCannotPlayBack_4[57];
// 14099D840: using guessed type wchar_t aPinsCannotConn[62];
// 14099D8C0: using guessed type wchar_t aTheStreamHasBe[32];
// 14099D900: using guessed type wchar_t aTheGraphCanTBe[60];
// 14099D980: using guessed type wchar_t aTheVideoCdCanT[78];
// 14099DA20: using guessed type wchar_t aTheStopTimeFor[42];
// 14099DA80: using guessed type wchar_t aThereIsNotEnou[114];
// 14099DB70: using guessed type wchar_t aTheVideoportCo[57];
// 14099DBF0: using guessed type wchar_t aEitherDirectdr[137];
// 14099DD10: using guessed type wchar_t aNoVideoportHar[71];
// 14099DDA0: using guessed type wchar_t aNoCaptureHardw[69];
// 14099DE30: using guessed type wchar_t aThisUserOperat[62];
// 14099DEB0: using guessed type wchar_t aThisOperationI[55];
// 14099DF20: using guessed type wchar_t aTheSpecifiedBu[128];
// 14099E020: using guessed type wchar_t aDvdVideoPlayba[49];
// 14099E090: using guessed type wchar_t aDvdVideoPlayba_0[42];
// 14099E0F0: using guessed type wchar_t aDvdVideoPlayba_1[74];
// 14099E190: using guessed type wchar_t aVersionNumberO[87];
// 14099E240: using guessed type wchar_t aCopyProtection[109];
// 14099E320: using guessed type wchar_t aThereWasNoPrev[114];
// 14099E410: using guessed type wchar_t aThisObjectCann[60];
// 14099E490: using guessed type wchar_t aTheCurrentTitl[123];
// 14099E590: using guessed type wchar_t aTheOperationCa_0[65];
// 14099E620: using guessed type wchar_t aTheSpecifiedMe[34];
// 14099E670: using guessed type wchar_t aTheSpecifiedCo[64];
// 14099E6F0: using guessed type wchar_t aTheDataDidNotC[47];
// 14099E750: using guessed type wchar_t aTheStateDataWa[28];
// 14099E790: using guessed type wchar_t aTheStateDataIs[41];
// 14099E7F0: using guessed type wchar_t aTheRegionWasNo[54];
// 14099E860: using guessed type wchar_t aTheRequestedDv[51];
// 14099E8D0: using guessed type wchar_t aCurrentlyThere[72];
// 14099E960: using guessed type wchar_t aTheCurrentPare[40];
// 14099E9B0: using guessed type wchar_t aTheCurrentAudi[42];
// 14099EA10: using guessed type wchar_t aTheAudioStream[99];
// 14099EAE0: using guessed type wchar_t aTheSeekIntoThe[48];
// 14099EB40: using guessed type wchar_t aFrameStepIsNot[51];
// 14099EBB0: using guessed type wchar_t aTheSpecifiedSt[57];
// 14099EC30: using guessed type wchar_t aTheOperationDe[165];
// 14099ED80: using guessed type wchar_t aTheSpecifiedPa[55];
// 14099EDF0: using guessed type wchar_t aThereIsCurrent[42];
// 14099EE50: using guessed type wchar_t aThisThreadHasA[107];
// 14099EF30: using guessed type wchar_t aIpinflowcontro[138];
// 14099F050: using guessed type wchar_t aAnOperationFai[52];
// 14099F0C0: using guessed type wchar_t aTheSpecifiedPr[45];
// 14099F120: using guessed type wchar_t aTheSpecifiedPr_0[75];
// 14099F1C0: using guessed type wchar_t aEndOfStreamSam[35];
// 14099F210: using guessed type wchar_t aNoStreamCanBeF[54];
// 14099F280: using guessed type wchar_t aSeekingNotSupp[39];
// 14099F2D0: using guessed type wchar_t aTheStreamForma[39];
// 14099F320: using guessed type wchar_t aTheSampleIsBus[20];
// 14099F350: using guessed type wchar_t aTheObjectCanTA[100];
// 14099F420: using guessed type wchar_t aTheStreamTypeI[49];
// 14099F490: using guessed type wchar_t aTheObjectIsNot[36];
// 14099F4E0: using guessed type wchar_t aThereAreTooMan[41];
// 14099F540: using guessed type wchar_t aTheTargetWindo[112];
// 14099F620: using guessed type wchar_t aTargetWindowIs[26];
// 14099F658: using guessed type wchar_t aNoAccessToDesk[22];
// 14099F688: using guessed type wchar_t aDisplayModeHas[25];
// 14099F6C0: using guessed type wchar_t aDisplayModeIsC[25];
// 14099F700: using guessed type wchar_t aTheApplication_1[282];
// 14099F940: using guessed type wchar_t aTheItemRequest[147];
// 14099FA70: using guessed type wchar_t aTheSpecifiedSi[86];
// 14099FB20: using guessed type wchar_t aUnsupported[13];
// 14099FB40: using guessed type wchar_t aHardwareDevice_0[25];
// 14099FB80: using guessed type wchar_t aDeviceHungDueT[42];
// 14099FBE0: using guessed type wchar_t aDeviceResetDue[44];
// 14099FC38: using guessed type wchar_t aWasStillDrawin_0[19];
// 14099FC60: using guessed type wchar_t aTheRequestedFu[74];
// 14099FD00: using guessed type wchar_t aAnInternalDriv[35];
// 14099FD50: using guessed type wchar_t aTheApplication_2[147];
// 14099FE80: using guessed type wchar_t aRemoteDesktopC[36];
// 14099FED0: using guessed type wchar_t aRemoteDesktopC_0[40];
// 14099FF20: using guessed type wchar_t aThereaAreTooMa[41];
// 14099FF80: using guessed type wchar_t aDeferredContex[52];
// 14099FFF0: using guessed type wchar_t aThePixelFormat[35];
// 1409A0040: using guessed type wchar_t aTheObjectWasNo[63];
// 1409A00C0: using guessed type wchar_t aTheObjectHasNo[41];
// 1409A0120: using guessed type wchar_t aTheRequestedOp[41];
// 1409A0180: using guessed type wchar_t aTheGeomeryScan[48];
// 1409A01E0: using guessed type wchar_t aD2dCouldNotAcc[33];
// 1409A0230: using guessed type wchar_t aAValidDisplayS[47];
// 1409A0290: using guessed type wchar_t aTheSuppliedVec[29];
// 1409A02D0: using guessed type wchar_t aAnInternalErro[74];
// 1409A0370: using guessed type wchar_t aTheDisplayForm[78];
// 1409A0410: using guessed type wchar_t aACallToThisMet[34];
// 1409A0460: using guessed type wchar_t aNoHwRenderingD[56];
// 1409A04D0: using guessed type wchar_t aHereHasBeenAPr[140];
// 1409A05F0: using guessed type wchar_t aShaderConstruc[55];
// 1409A0660: using guessed type wchar_t aShaderCompilat[27];
// 1409A06A0: using guessed type wchar_t aRequestedDxSur[57];
// 1409A0720: using guessed type wchar_t aTheRequestedD2[44];
// 1409A0778: using guessed type wchar_t aInvalidNumber[16];
// 1409A07A0: using guessed type wchar_t aObjectsUsedTog[70];
// 1409A0830: using guessed type wchar_t aALayerResource[63];
// 1409A08B0: using guessed type wchar_t aThePopCallDidN[55];
// 1409A0920: using guessed type wchar_t aThePushAndPopC[39];
// 1409A0970: using guessed type wchar_t aAttemptToCopyF[75];
// 1409A0A10: using guessed type wchar_t aTheBrushTypesA[47];
// 1409A0A70: using guessed type wchar_t aAnUnknownWin32[35];
// 1409A0AC0: using guessed type wchar_t aTheRenderTarge[45];
// 1409A0B20: using guessed type wchar_t aATextClientDra[57];
// 1409A0BA0: using guessed type wchar_t aTheApplication_3[196];
// 1409A0D30: using guessed type wchar_t aIndicatesAnErr_0[57];
// 1409A0DB0: using guessed type wchar_t aIndicatesAnErr[112];
// 1409A0E90: using guessed type wchar_t aIndicatesTheSp[45];
// 1409A0EF0: using guessed type wchar_t aAFontFileCould[146];
// 1409A1020: using guessed type wchar_t aAFontFileExist[102];
// 1409A10F0: using guessed type wchar_t aAFontCollectio[60];
// 1409A1170: using guessed type wchar_t aTheGivenInterf[43];
// 1409A11C8: using guessed type wchar_t aCouldNotInitia[31];
// 1409A1210: using guessed type wchar_t aNoDeviceCouldB[61];
// 1409A1290: using guessed type wchar_t aAMediaFileCoul[33];
// 1409A12E0: using guessed type wchar_t aTheDeviceInter[98];
// 1409A13B0: using guessed type wchar_t aAnErrorOccurre_2[54];
// 1409A1420: using guessed type wchar_t aAnErrorOccurre_1[53];
// 1409A1490: using guessed type wchar_t aAnErrorOccurre_0[58];
// 1409A1510: using guessed type wchar_t aAnErrorOccurre[57];
// 1409A1590: using guessed type wchar_t aIncorrectVersi[39];
// 1409A15E0: using guessed type wchar_t aTheDeviceWasRe[24];
// 1409A1610: using guessed type wchar_t aTheValidateMet[86];
// 1409A16C0: using guessed type wchar_t aTheValidateMet_0[88];
// 1409A1770: using guessed type wchar_t aReferenceToUnd[36];
// 1409A17C0: using guessed type wchar_t aEntity1Contain[56];
// 1409A1830: using guessed type wchar_t aCannotUseTheNd[64];
// 1409A18B0: using guessed type wchar_t aCannotUseAGene[73];
// 1409A1950: using guessed type wchar_t aCannotUseUnpar[56];
// 1409A19C0: using guessed type wchar_t aCannotReferenc[79];
// 1409A1A60: using guessed type wchar_t aTheElement1IsU[64];
// 1409A1AE0: using guessed type wchar_t aTheAttribute1R[81];
// 1409A1B90: using guessed type wchar_t aElementCannotB[56];
// 1409A1C00: using guessed type wchar_t aElementContent[62];
// 1409A1C80: using guessed type wchar_t aTheNameOfTheTo[81];
// 1409A1D30: using guessed type wchar_t aElementContent_0[59];
// 1409A1DB0: using guessed type wchar_t aTheAttribute1O[72];
// 1409A1E40: using guessed type wchar_t aAttribute1HasA_0[93];
// 1409A1F00: using guessed type wchar_t aAttribute1HasA[68];
// 1409A1F90: using guessed type wchar_t aTextIsNotAllow[68];
// 1409A2020: using guessed type wchar_t aAnAttributeDec[69];
// 1409A20B0: using guessed type wchar_t aReferenceToUnd_0[39];
// 1409A2100: using guessed type wchar_t aAttribute1Must[43];
// 1409A2160: using guessed type wchar_t aRequiredAttrib[36];
// 1409A21A8: using guessed type wchar_t aExpecting1[15];
// 1409A21D0: using guessed type wchar_t aInvalidXaudio2[38];
// 1409A2220: using guessed type wchar_t aHardwareXmaDec[27];
// 1409A2260: using guessed type wchar_t aFailedToCreate[33];
// 1409A22B0: using guessed type wchar_t aDeviceInvalida[46];
// 1409A2310: using guessed type wchar_t aTheEngineIsAlr[35];
// 1409A2360: using guessed type wchar_t aTheEngineHasNo[37];
// 1409A23B0: using guessed type wchar_t aTheEngineHasEx[54];
// 1409A2420: using guessed type wchar_t aNoNotification[26];
// 1409A2460: using guessed type wchar_t aNotificationAl[33];
// 1409A24A8: using guessed type wchar_t aInvalidUsage[15];
// 1409A24C8: using guessed type wchar_t aInvalidData_0[14];
// 1409A24F0: using guessed type wchar_t aFailToPlayDueT[36];
// 1409A2538: using guessed type wchar_t aGlobalSettings[28];
// 1409A2570: using guessed type wchar_t aInvalidVariabl[24];
// 1409A25A0: using guessed type wchar_t aInvalidCategor[18];
// 1409A25C8: using guessed type wchar_t aInvalidCueInde[19];
// 1409A25F0: using guessed type wchar_t aInvalidWaveInd[20];
// 1409A2618: using guessed type wchar_t aInvalidTrackIn[21];
// 1409A2648: using guessed type wchar_t aInvalidSoundOf[31];
// 1409A2688: using guessed type wchar_t aErrorReadingAF[22];
// 1409A26B8: using guessed type wchar_t aUnknownEventTy[20];
// 1409A26E0: using guessed type wchar_t aInvalidCallOfM[50];
// 1409A2750: using guessed type wchar_t aNoWavebankExis[42];
// 1409A27A8: using guessed type wchar_t aUnableToSelect[30];
// 1409A27F0: using guessed type wchar_t aThereCanBeOnly[39];
// 1409A2840: using guessed type wchar_t aTheWavebankIsN[30];
// 1409A2880: using guessed type wchar_t aNoAudioDeviceF[23];
// 1409A28B0: using guessed type wchar_t aInvalidEntryCo[38];
// 1409A2900: using guessed type wchar_t aTimeOffsetForS[47];
// 1409A2960: using guessed type wchar_t aTimeOffsetForS_0[48];
// 1409A29C0: using guessed type wchar_t aFriendlyNamesA[45];
// 1409A2A20: using guessed type wchar_t aErrorWritingAF[41];
// 1409A2A78: using guessed type wchar_t aMissingASoundb[21];
// 1409A2AA8: using guessed type wchar_t aMissingAnRpcCu[22];
// 1409A2AE0: using guessed type wchar_t aMissingDataFor[38];
// 1409A2B30: using guessed type wchar_t aUnknownCommand[17];
// 1409A2B58: using guessed type wchar_t aMissingADspPar[25];
// 1409A2B90: using guessed type wchar_t aWaveDoesNotExi[44];
// 1409A2BF0: using guessed type wchar_t aFailedToCreate_0[58];
// 1409A2C68: using guessed type wchar_t aInvalidAuditio[26];
// 1409A2CA0: using guessed type wchar_t aRequestedAudio[36];
// 1409A2CE8: using guessed type wchar_t aDebuggerIsPres[21];
// 1409A2D18: using guessed type wchar_t aNA[4];
// 140B7B704: using guessed type __int16 word_140B7B704;


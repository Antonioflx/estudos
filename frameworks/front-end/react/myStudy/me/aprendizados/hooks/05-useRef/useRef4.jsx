import { useState, useRef } from "react";

export default function ShowRef4() {
	return <VideoPlayer />;
}

function VideoPlayer() {
	const [isPlaying, setIsPlaying] = useState(false);
	const ref = useRef(null);

	function handleClick() {
		const nextIsPlaying = !isPlaying;
		setIsPlaying(nextIsPlaying);

		nextIsPlaying ? ref.current.play() : ref.current.pause();
	}

	return (
		<div>
			<button
				style={{
					display: "flex",
					justifyContent: "left",
					backgroundColor: "lightgray",
				}}
				onClick={handleClick}
			>
				{isPlaying ? "Pause" : "Play"}
			</button>
			<video
				style={{
					display: "block",
					width: "300px",
					marginTop: "20px",
				}}
				ref={ref}
				onPlay={() => setIsPlaying(true)}
				onPause={() => setIsPlaying(false)}
			>
				<source
					src="https://interactive-examples.mdn.mozilla.net/media/cc0-videos/flower.mp4"
					type="video/mp4"
				/>
			</video>
		</div>
	);
}
